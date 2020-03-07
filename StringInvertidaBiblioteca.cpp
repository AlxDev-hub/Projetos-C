// Com a biblioteca string
#include<stdio.h>
#include<string.h>
int main(){
	int cnt=0, count;
	char str1[100], str2[100];
	puts("Digite uma string qualquer: ");
	scanf("%s", str1);
	int tamanho = strlen(str1);
	for (count=tamanho;count>=0; count--) {
		printf("%c", str1[count]);
	}
return(0);
}
