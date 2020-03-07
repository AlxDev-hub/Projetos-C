/* 15. Faça um programa C contendo uma função que receba um vetor X de 15 números inteiros, por parâmetro, e retorne a quantidade de valores pares em X. 
b) Procedimento utilizando parâmetro por referência. */

#include<stdio.h>
void pares(int vet[15], int *quant) {
    int i;
    *quant=0;
        for(i=0;i<15;i++) {
            if(vet[i]%2==0) {
*quant=*quant+1;
   }
  }
}
int main() {
    int vx[15], j, quantidade;
        for(j=0;j<15;j++) {
printf("\n Digite o numero do vx: ", j+1);
    scanf("%d", &vx[j]);
}
pares(vx, &quantidade);
printf("\n A %d valores pares no vx.", quantidade);
return(0);
}
