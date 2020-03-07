#include<stdio.h>
int main(){
	char str1[100], str2[100];
	int i;
		printf("Informe a primeira string desejada: ");
		scanf("%s", str1);
		printf("Informe a segunda string desejada: ");
		scanf("%s", str2);
			for(i=0; str1[i]==str2[i] && str1[i]!='\0';i++);
			if(str1[i]==str2[i]){
				printf("As strings %s e %s sao identicas.", str1, str2);
			}
			else{
				printf("As strings %s e %s sao diferentes.", str1, str2);
			}
return(0);
}
