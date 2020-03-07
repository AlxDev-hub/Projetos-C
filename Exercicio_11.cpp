/* 11. Faça um programa C que carregue um vetor com sete números inteiros, calcule e mostre:
a. Os números múltiplos de 2;
b. Os números múltiplos de 3;
c. Os números múltiplos de 2 e de 3;
*/

#include<stdio.h>
int main () {
    int vetor[7], i, cont2=0, cont3=0, cont23=0;

    for(i=0;i<7;i++) {
        printf("\n Digite o numero do vetor: ", i+1);
            scanf("%d", &vetor[i]);
}
        printf("\n Os multiplos de 2 sao: ");
    for(i=0;i<7;i++) {
                if(vetor[i]%2==0) {
cont2=cont2+1;
        printf("%d", vetor[i]);
 }
}
                if(cont2==0) {
        printf("\n Nao foi digitado nenhum numero multiplo de 2");
}
printf("\n Os numeros digitados multiplos de 3 são: ");
    for(i=0;i<7;i++) {
                if(vetor[i]%3==0) {
cont3=cont3+1;
        printf("%d", vetor[i]);
 }
}
                if(cont3==0) {
        printf("\n Nao foi digitado nenhum numero multiplo de 3");
}
        printf("\n Os numeros digitados multiplos de 2 e 3: ");
    for(i=0;i<7;i++) {
                if((vetor[i]%2==0)&&(vetor[i]%3==0)) {
cont23=cont23+1;
        printf("%d", vetor[i]);
 }
}
                if(cont23==0) {
        printf("\n Nao foi digitado nenhum numero multiplo de 3 e 2");
}
return(0);
}
