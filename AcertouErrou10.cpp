#include<stdio.h>

int main(){

	int num;

	printf("Digite um numero:");
	scanf("%d", &num);

	if(num==10){
		printf("\n\n Voce acertou \n O numero e igual a 10. \n");
	}else{
            printf("\n\n Voce errou \n O numero e diferente de 10. \n");
    }

return(0);
}
