// Encontre o maior numero em uma matriz de 5 linhas e 10 colunas.
#include<stdio.h>
int main(){
	int i, j, maior, linha=5, coluna=10;
	int matriz[linha][coluna];
	int posicaoI, posicaoJ;
	printf("Informe os inteiros \n");
	for(i=0; i<linha; i++){
		printf("Informe os numeros da %d linha: ", i+1);
		for(j=0; j<coluna; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	maior = matriz[0][0];
	posicaoI = posicaoJ = 0;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				posicaoI = i;
				posicaoJ = j;
			}
		}
	}
	printf("O maior valor e: %d na posicao i=%d e j=%d", maior, posicaoI, posicaoJ);
	return(0);
}
