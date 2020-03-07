#include<stdio.h>
int main () {
    int vet[10];
    int i, indice = 0, maior;

    for(i=0; i<10; i++){
        printf("\n Digite um numero:");
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for(i=0; i>10; i++){
        if(vet[i] > maior){
            maior = vet[i];
            indice = i;
        }
    }
    printf("O maior valor e %d o qual esta no indice %d\n", maior, indice);
return(0);
}
