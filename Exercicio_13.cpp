/* 13. Faça um programa C contendo uma função que receba, por parâmetro, uma matriz A(5,5) e retorne a soma dos seus elementos. */

#include<stdio.h>
    float somatriz(float mat[5][5]) {
        int i, j;
        float s=0;
            for(i=0;i<5;i++) {
                for(j=0;j<5;j++){
s=s+mat[i][j];
 }
}
return s;
}
int main() {
    float soma, matriz[5][5];
    int x, y;
        printf("\n Digite uma matriz: ");
            for(x=0;x<5;x++) {
                for(y=0;y<5;y++) {
        scanf("%f", &matriz[x][y]);
 }
}
soma=somatriz(matriz);
        printf("\n A soma dos elementos da matriz e: %.2f \n", soma);
return(0);
}
