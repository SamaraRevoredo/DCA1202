#include <stdio.h>
#include <stdlib.h>
/*
Ponteiros para funcao eh um ponteiro que eh passado como argumento para outra funcao
Aqui temos um exemplo de algoritmo que troca dois numeros: Eh muito melhor fazer uma
funcao para isso pois se quisermos usar essa funcao novamente nao precisamos implementa-la
duas vezes no main() usando ponteiros podemos fazer modificacoes no conteudo do endereco
assim as variaveis do main irao modificar tambem. 
*/
void Troca(int *A, int *B){
	int aux;
	aux = *A;
	*A = *B;
	*B = aux;
}

int main(){
	int x,y;
	int *px,*py;
	x = 5;
	y = 4;
	px = &x;
	py = &y;
	printf("x = %d y = %d\n", x, y);
	Troca(px,py);
	printf("TROCA x e y \n");
	printf("x = %d y = %d\n", x, y);
	return 0;
}
