#include<stdio.h>

int main(){

int i, vet1[10], vet2[10], vet3[10];

printf("Primeiro Vetor:");
for(i=0; i<10; i++){
	scanf("%d", &vet1[i]);
}
printf("Segundo Vetor:");
for(i=0; i<10; i++){
	scanf("%d", &vet2[i]);
}
for(i=0; i<10; i++){
	vet3[i] = vet1[i] + vet2[i];
}
printf("Terceiro Vetor:");
for(i=0; i<10; i++){
	printf("%d ", vet3[i]);
}
return(0);
}
