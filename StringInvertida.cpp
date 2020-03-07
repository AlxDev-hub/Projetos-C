#include<stdio.h>
int main(){
	char str1[100];
	int i;
	printf("Informe a string desejada: ");
	scanf("%s", str1);
	for(i=0; str1[i] != '\0'; i++);
	for(i--; i>=0 ;i--){
		printf("%c", str1[i]);
	}
return(0);
}
