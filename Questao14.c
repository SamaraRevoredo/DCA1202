#include <stdio.h>
#include <stdlib.h>
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
	for(i = 0; i < n; i++){
		printf("valor [%d] = %.5f\n",i,valores[i]);
	}	
	free (valores);
		
	return 0;
}
