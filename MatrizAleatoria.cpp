/*
Preencha uma matriz 4x5 com numeros aleatorios e imprima na tela de forma com que cada linha da matriz apareça numa linha.Exemplo:
17 20 43 49 63 \n
34 12 03 47 60 \n
07 33 53 04 06 \n
64 65 20 01 54 \n
Dica: Funçao para gerar numero aleatorio: int x=rand();
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, linha = 4, coluna = 5;
	int matriz[linha][coluna];
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz[i][j] = rand()%100;
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
return(0);
}
