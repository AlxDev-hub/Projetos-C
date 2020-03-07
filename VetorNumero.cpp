#include<stdio.h>

int main() {

int i, vet[10];

printf("Digite 10 numeros separados por espaço ou digite um numero e aperte ENTER \n");
for (i=0;i<10;i++){
	scanf("%d", &vet[i]);
}
for(i=0;i<10;i++){
	printf("%d", vet[i]);
}
return(0);
}
