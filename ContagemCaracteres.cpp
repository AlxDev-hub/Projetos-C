#include<stdio.h>
int main (){
	char str[100];
	int i;
	printf("Informe a string desejada:");
	scanf("%s", str);
	for(i=0; str[i] != '\0'; i++);
	printf("A quantidade de caracteres e: %d \n", i);
	return(0);
}
