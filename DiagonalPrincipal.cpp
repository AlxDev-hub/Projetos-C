// Diagonal principal: Preencha uma matriz 10x10 com numeros aleatorios e imprima na tela apenas a diagonal principal
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, linha = 10, coluna = 10;
	int matriz[linha][coluna];
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz[i][j] = rand()%10;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<linha; i++){
		printf("%d\n", matriz[i][i]);
	}
return(0);
}
