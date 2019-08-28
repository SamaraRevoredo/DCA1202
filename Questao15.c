#include <stdio.h>
#include <stdlib.h>
//funcao para comparar elementos
int comparar(const void*x, const void *y){
	return (*(int*)x-*(int*)y);
}
int main(){
	int n,i;
	printf("DIGITE O NUMEROS DE VALORES\n");
	scanf("%i",&n);//pega o numero de valores a ser lido
	float *valores;//cria um ponteiro
	valores = (float*) malloc(n*sizeof(float));//alloca na memoria o numero de valores vezes o tamanho float
	//le todos os valores e armazena no vetor
	for(i = 0; i < n; i++){
		printf("Digite o valor %d:\n",i);
		scanf("%f",&valores[i]);
	}
	//ordena os valor usando a funcao qsort
	qsort(valores,n,sizeof(int),comparar);	
	//imprime os valores na tela com 5 casas depois da virgula
	for(i = 0; i < n; i++){
		printf("valor [%d] = %.5f\n",i,valores[i]);
	}	
	free (valores); //libera o valor alocado na memoria
		
	return 0;
}
