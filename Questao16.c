#include <stdio.h>
#include <stdlib.h>
int comparar(const void*x, const void *y){
  if ( *(float*)x == *(float*)y ) return 0;
  if ( *(float*)x >  *(float*)y ) return 1;
 else
return -1;
}
void ordena(float* a, size_t b, size_t size,
          int (*comparar)(float,float)){
  int i,j;
  float aux;
  for(i=0; i<b-1; i++){
      for(j=0; j<b-i-1; j++){
          if(comparar(a[j],a[j+1])==-1){
              float a[j];
              a[j]=a[j+1];
              a[j+1]=aux;
          }
      }
  }
}
 
int main(){
 int n,i;
 printf("DIGITE O NUMEROS DE VALORES\n");
 scanf("%i",&n);
 float *valores;
 valores = (float*) malloc(n*sizeof(float));
 for(i = 0; i < n; i++){
   printf("Digite o valor %d:\n",i);
   scanf("%f",&valores[i]);
 }
  ordena(valores, n, sizeof(float), comparar);
 for(i = 0; i < n; i++){
   printf("valor [%d] = %.5f\n",i,valores[i]);
 }
 free (valores);
  
 return 0;
}
