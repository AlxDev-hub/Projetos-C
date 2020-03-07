#include<stdio.h>

int main () {

	int dia_da_semana;

	printf("Digite um numero correspondente ao dia:");
	scanf("%d", &dia_da_semana);

	switch (dia_da_semana){
		case 1:
			printf("\n O dia e correspondente ao domingo. \n");
			break;
		case 2:
			printf("\n O dia e correspondente a segunda. \n");
			break;
		case 3:
			printf("\n O dia e correspondente a terca. \n");
			break;
		case 4:
			printf("\n O dia e correspondente a quarta. \n");
			break;
		case 5:
			printf("\n O dia e correspondente a quinta. \n");
			break;
		case 6:
			printf("\n O dia e correspondente a sexta. \n");
			break;
		case 7:
			printf("\n O dia e correspondente ao sabado");
			break;
		default:
			printf("\n O numero digitado e invalido para um dia da semana");
	}
return(0);
}
