/* 7. Faça um programa C que carregue um vetor de nove elementos numéricos, calcule e mostre os números pares e suas respectivas posições. */

#include<stdio.h>
int main() {
    int vetor[9], i, j=0;
for(i=0;i<9;i++) {
    printf("\n Digite o numero: ", i+1);
        scanf("%d", &vetor[i]);
}
for(i=0;i<9;i++) {
    if(vetor[i]%2==0) {
j=j+1;
    printf("\n Numero par: %d - Posição no vetor: %d", vetor[i], i);
}
}
if(j==0) {
printf("\n Nao foi digitado numero par");
}
return(0);
}
