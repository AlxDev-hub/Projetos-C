/* 15. Faça um programa C contendo uma função que receba um vetor X de 15 números inteiros, por parâmetro, e retorne a quantidade de valores pares em X. 
a) Função utilizando parâmetro por valor. */

#include<stdio.h>
int pares(int vet[15]) {
    int i, q=0;
    for(i=0;i<15;i++) {
        if(vet[i]%2==0) {
q=q+1;
 }
}
return q;
}
int main() {
    int vx[15], j, quant;
for(j=0;j<15;j++) {
    printf("\n Digite o numero do vx: ", j+1);
        scanf("%d", &vx[j]);
}
quant=pares(vx);
    printf("\n Ha %d valores pares no vx.", quant);
return(0);
}
