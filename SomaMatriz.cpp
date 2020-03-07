// Dado um array A de 3x5 elementos inteiros, calcular a soma dos seus elementos.
#include<stdio.h>
int main(){
	int i, j, soma, linha = 3, coluna = 5;
	int matriz[linha][coluna];
	printf("Informe os inteiros\n");
	for(i=0; i<linha; i++){
		printf("Informe os numeros da %d linha: ", i+1);
		for(j=0; j<coluna; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	soma = 0;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			soma += matriz[i][j];
		}
	}
	printf("A soma dos valores da matriz e: %d", soma);
	return(0);
}
