// 6. Faça um programa C que leia uma matriz 3 x 3 de números inteiros e depois mostre os seus elementos.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, linha = 3, coluna = 3;
	int matriz[linha][coluna];
        printf("\n Digite os Numeros: ");
	for (i=0; i<linha; i++){
		for (j=0; j<coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
	}
	for (i=0; i<linha; i++){
		for (j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
return(0);
}
