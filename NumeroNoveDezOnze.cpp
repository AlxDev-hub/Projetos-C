#include<stdio.h>
int main(){
	int num;
	printf("Digite um numero:");
	scanf("%d", &num);
	switch (num){
		case 9:
		printf("\n O numero e igual a 9. \n");
		break;
		case 10:
		printf("\n O numero e igual a 10. \n");
		break;
		case 11:
		printf("\n O numero e igual a 11. \n");
		break;
		default:
			printf("\n O numero nao e 9, nem 10, nem 11. \n");
	}
	return(0);
}
