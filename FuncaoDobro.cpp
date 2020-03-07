// Crie um programa que leia três números, Para cada número, imprima o dobro. Use uma função que receba como parâmetro um número inteiro e devolve o seu dobro. O valor calculado deve ser impresso na função principal.//

#include<stdio.h>
int dobro(int x) {
    return 2*x;
}
int main() {
    int i, valor;
        for(i=0; i<3; i++){
            printf("Informe o %d numero: ", i+1);
                scanf("%d", &valor);
            printf("O dobro de %d eh %d \n", valor, dobro(valor));
    }
return(0);
}
