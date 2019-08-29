#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void mult(int **vet1, int **vet2, int **res, int a, int b, int c){
  int i,j,k, somador;
  for(i = 0; i < b; i++){
      for(j = 0; j < b; j++){
          res[i][j] = 0;
          somador = 0;
          for(k=0; k< c; k++){
              somador = somador + vet1[i][k]*vet2[k][j];
          }
              res[i][j] = somador;
        }
   }
}
 
 
int main()
{
  int **vet1, **vet2, **res;
  int a, b,c, i, j;
  printf("Digite a dimensao da matriz A\n");
  scanf("%d\n%d", &a, &b);
  printf("Digite numero de colunas da matriz B\n");
  scanf("%d", &c);
 
  vet1 = (int**)malloc(a*sizeof(int));
  vet2 = (int**)malloc(b*sizeof(int));
  res = (int**)malloc(c*sizeof(int));
 
 
 
  for(i=0; i<a; i++){
      vet1[i]=(int*) malloc(a*sizeof(int));
  }
  for(i=0; i<b; i++){
      vet2[i]=(int*) malloc(b*sizeof(int));
  }
  for(i=0; i<c; i++){
      res[i]=(int*) malloc(c*sizeof(int));
  }
 
  srand(time(0));
 
         for(i=0; i<a; i++){
         for(j=0; j<b; j++){
        vet1[i][j] = rand()%10;
      }
   }
 
      for(i=0; i<b; i++){
       for(j=0; j<c; j++){
        vet2[i][j] = rand()%10;
      }
   }
    mult(vet1, vet2, res, a, b, c);
  printf("\n C\n");
      for(i=0; i<a; i++){
       for(j=0; j<b; j++){
          printf("%d\t", res[i][j]);
      }
      printf("\n");
  }
 
      for (i=0;i<a;i++) {
      free(vet1[i]);
  }
     for (i=0;i<b;i++) {
      free(vet2[i]);
  }
     for (i=0;i<c;i++) {
       free(res[i]);
  }
 
   free(vet1);
    free(vet2);
   free(res);
 
  return 0;