#include<stdio.h>
int main(){

	/*Declara��o de Vari�veis*/

	int dias;
	float anos;

	printf("Entre com o numero de dias: ");

	/*Entrada de dados*/

	scanf("%d", &dias);

	anos=dias/365.25; /* Conversao dias->anos*/

	printf("\n\n %d dias equivalem a %f anos.\n", dias, anos);

return(0);
}
