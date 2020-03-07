#include<stdio.h>
#include<locale.h>

int main() {

	setlocale (LC_ALL, "Portuguese");

	float i1, i2, i3, i4;
	float media;

	printf("Digite o primeiro número: ");
	scanf("%f", &i1);

	printf("Digite o segundo número: ");
	scanf("%f", &i2);

	printf("Digite o terceiro número: ");
	scanf("%f", &i3);

	printf("Digite o quarto número: ");
	scanf("%f", &i4);

	media=(i1+i2+i3+i4)/4;

	printf("A média dos quatro números é: %f", media);
	if((i1>i2) && (i1>i3) && (i1>i4)){
		printf("\n %f é o número maior!", i1);
	}
	else if((i2>i1) && (i2>i3) && (i2>i4)){
		printf("\n %f é o número maior!", i2);
	}
	else if((i3>i1) && (i3>i2) && (i3>i4)){
		printf("\n %f é o número maior!", i3);
	}
	else if((i4>i1) && (i4>i2) && (i4>i3)){
		printf("\n %f é o número maior!", i4);
	}
	else{
		printf("\n pelo menos dois números são iguais!");
	}
	return(0);
}
