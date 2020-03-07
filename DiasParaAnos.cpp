#include<stdio.h>
int main(){

	/*Declaração de Variáveis*/

	int dias;
	float anos;

	printf("Entre com o numero de dias: ");

	/*Entrada de dados*/

	scanf("%d", &dias);

	anos=dias/365.25; /* Conversao dias->anos*/

	printf("\n\n %d dias equivalem a %f anos.\n", dias, anos);

return(0);
}
