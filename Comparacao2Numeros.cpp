#include<stdio.h>

int main(){

	int i, j;

	printf(" Entre com dois numeros inteiros:");
	scanf("%d %d", &i, &j);

	printf("\n %d == %d e %d \n", i, j, i==j);
	printf("\n %d != %d e %d \n", i, j, i!=j);
	printf("\n %d <= %d e %d \n", i, j, i<=j);
	printf("\n %d >= %d e %d \n", i, j, i>=j);
	printf("\n %d < %d e %d \n", i, j, i<j);
	printf("\n %d > %d e %d \n", i, j, i>j);

return(0);
}
