// Com a biblioteca string
#include<stdio.h>
#include<string.h>
int main(){
	char str1[100], str2[100];
	int i;
		printf("Informe a primeira string desejada: ");
		scanf("%s", str1);
		printf("Informe a segunda string desejada: ");
		scanf("%s", str2);
		int resultado = strcmp(str1,str2);
		if(resultado == 0)
	{
		printf("As strings %s e %s sao identicas.", str1, str2);
	}
	else{
		printf("As strings %s e %s sao diferentes.", str1, str2);
	}
return(0);
}
