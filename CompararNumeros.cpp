#include<stdio.h>
#include<locale.h>

int main() {

	setlocale (LC_ALL, "Portuguese");

	float i1, i2, i3, i4;
	float media;

	printf("Digite o primeiro n�mero: ");
	scanf("%f", &i1);

	printf("Digite o segundo n�mero: ");
	scanf("%f", &i2);

	printf("Digite o terceiro n�mero: ");
	scanf("%f", &i3);

	printf("Digite o quarto n�mero: ");
	scanf("%f", &i4);

	media=(i1+i2+i3+i4)/4;

	printf("A m�dia dos quatro n�meros �: %f", media);
	if((i1>i2) && (i1>i3) && (i1>i4)){
		printf("\n %f � o n�mero maior!", i1);
	}
	else if((i2>i1) && (i2>i3) && (i2>i4)){
		printf("\n %f � o n�mero maior!", i2);
	}
	else if((i3>i1) && (i3>i2) && (i3>i4)){
		printf("\n %f � o n�mero maior!", i3);
	}
	else if((i4>i1) && (i4>i2) && (i4>i3)){
		printf("\n %f � o n�mero maior!", i4);
	}
	else{
		printf("\n pelo menos dois n�meros s�o iguais!");
	}
	return(0);
}
