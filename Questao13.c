//Com ponteiros para uma  função se torna possível manipular uma variável que está sendo passada, se torna também possível usá-lo como argumentos para retornar mais de um valor, e passagens  de arranjos para funções

//código que faz a troca de valor de duas variáveis int, com o uso de ponteiros para funções
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
