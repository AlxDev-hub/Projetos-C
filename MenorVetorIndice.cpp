#include<stdio.h>
int main () {
    int vet[20];
    int i, indice = 0, menor;

    for(i=0; i<20; i++){
        printf("\n Digite um numero:");
        scanf("%d", &vet[i]);
    }
    menor = vet[0];
    for(i=0; i<20; i++){
        if(vet[i] < menor){
            menor = vet[i];
            indice = i;
        }
    }
    printf("O menor valor e %d o qual esta no indice %d\n", menor, indice);
return(0);
}
