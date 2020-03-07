#include<stdio.h>

int main (){

	int i;
	float vet[12], soma = 0;

	printf("Salarios:");
	for(i=0; i<12; i++){
		scanf("%f", &vet[i]);
	}
    printf("Salarios do ano:");
    for(i=0; i<12; i++){
	    printf("%.2f ", vet[i]);
	    soma = soma + vet[i];
    }

printf("\n Soma dos salarios do ano: %.2f", soma);

return(0);
}

