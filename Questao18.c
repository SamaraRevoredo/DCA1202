#include <stdio.h>
//função que soma os vetores
void somador(int *vet1, int *vet2, int *som, int n){
  int i;
  for(i=0; i<n; i++){
      som[i]=vet1[i]+vet2[i];
  }
}
int main()
{
  int *vet1, *vet2, *som;
  int n, i;
  printf("Digite o tamanho vetor\n");
  scanf("%d", &n);
  vet1 = (int*)malloc(n*sizeof(int));
  vet2 = (int*)malloc(n*sizeof(int));
som= (int*)malloc(n*sizeof(int));
  printf("Digite os elementos do vet1:\n");
  for(i=0; i<n; i++){
      scanf("%d", &vet1[i]);
  }
  printf("Digite os elementos do vet2:\n");
  for(i=0; i<n; i++){
      scanf("%d ", &vet2[i]);
  }
  somador(vet1,vet2,som,n);
  printf("O Resultado da soma é\n");
  for(i=0; i<n; i++){
      printf("%d +  %d = %d\n", vet1[i],vet2[i], som[i]);
  }
 
  free(vet1);
  free(vet2);
  free(som);
 
  return 0;
 
}
