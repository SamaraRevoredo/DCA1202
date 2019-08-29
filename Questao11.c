#include <stdio.h>
 
int main(){
  char ch[4], *pch;
   int it[4], *pit;
   float fl[4], *pfl; /*declarando vetores e ponteiros*/
   double db[4], *pdb;
   pch = ch;
   pit = it; /*ponteiros recebendo endereço*/
   pfl = fl;
   pdb = db;
 
   pch = 4092;
   pit = 4092;
   pfl = 4092;
   pdb = 4092;
 
   printf("%d, %d, %d, %d \n", pch, pch+1, pch+2, pch+3);
   printf("%d, %d, %d, %d \n", pit, pit+1, pit+2, pit+3);
   printf("%d, %d, %d, %d \n", pfl, pfl+1, pfl+2, pfl+3);
   printf("%d, %d, %d, %d \n", pdb, pdb+1, pdb+2, pdb+3);
 
   return 0;
}
