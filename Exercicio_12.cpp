/* 12. Faça um programa C que carregue uma matriz 7 x 7 de números inteiros e crie dois vetores de sete posições cada um e que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor elemento de cada uma das colunas. Escreva a matriz A e os dois vetores. */

#include<stdio.h>
int main() {
    int i, j, k, matriz[7][7], v1[7], v2[7], maior=0, menor=0;
printf("\n Digite uma matriz: ");
    for(i=0;i<7;i++) {
        for(j=0;j<7;j++) {
    scanf("%d", &matriz[i][j]);
 }
}
    for(i=0;i<7;i++) {
        for(j=0;j<7;j++) {
            if(matriz[i][j]>maior) {
maior=matriz[i][j];
 }
}
v1[i]=maior;
maior=0;
}
menor=v1[1];
k=1;
       for(j=0;j<7;j++) {
            for(i=0;i<7;i++) {
                if(matriz[i][j]<menor) {
menor=matriz[i][j];
 }
}
v2[j]=menor;
menor=v1[k];
k++;
}
return(0);
}
