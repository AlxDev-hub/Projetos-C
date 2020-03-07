#include<stdio.h>

int main () {

	int dia, mes, ano;

	printf("Digite o dia, mes e ano:");
	scanf("%d %d %d", &dia, &mes, &ano);

	switch (mes) {
		case 1:
			printf("\n %d/Janeiro/%d", dia, ano);
			break;
		case 2:
			printf("\n %d/Fevereiro/%d", dia, ano);
			break;
		case 3:
			printf("\n %d/Marco/%d", dia, ano);
			break;
		case 4:
			printf("\n %d/Abril/%d", dia, ano);
			break;
		case 5:
			printf("\n %d/Maio/%d", dia, ano);
			break;
		case 6:
			printf("\n %d/Junho/%d", dia, ano);
			break;
		case 7:
			printf("\n %d/Julho/%d", dia, ano);
			break;
		case 8:
			printf("\n %d/Agosto/%d", dia, ano);
			break;
		case 9:
			printf("\n %d/Setembro/%d", dia, ano);
			break;
		case 10:
			printf("\n %d/Outubro/%d", dia, ano);
			break;
		case 11:
			printf("\n %d/Novembro/%d", dia, ano);
			break;
		case 12:
			printf("\n %d/Dezembro/%d", dia, ano);
			break;
		default:
			printf("\n O mes nao existe. \n");
	}
return(0);
}
