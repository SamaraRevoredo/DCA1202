//Com ponteiros para uma  fun��o se torna poss�vel manipular uma vari�vel que est� sendo passada, se torna tamb�m poss�vel us�-lo como argumentos para retornar mais de um valor, e passagens  de arranjos para fun��es

//c�digo que faz a troca de valor de duas vari�veis int, com o uso de ponteiros para fun��es
#include <stdio.h>
 
int main(){
 int a=6;
 int b=7;
 void troca (int *, int *);
   troca (&a, &b);
    printf("a=%d, b=%d\n", a, b);
 
   return 0;
}
void troca (int *a, int *b){
 int troca;
 troca=*a;
 *a=*b;
 *b=troca;
 
}
