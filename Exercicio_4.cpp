/* 4. Elabore um programa C que solicite ao operador uma série de números inteiros cujo elemento finalizador é o 0 (que servirá apenas como finalizador e não participará dos cálculos), processe e apresente no final as seguintes informações:
a) quantos números foram fornecidos;
b) qual é a soma dos números fornecidos;
c) qual é a média aritmética entre os números;
d) qual foi o menor número fornecido;
e) qual foi o maior número fornecido.
*/

#include<stdio.h>
int main () {
    float numero, soma, media, maior, menor;
    int quant;
soma=0;
quant=0;
        printf("\n Digite um numero: ");
            scanf("%f", &numero);
maior=numero;
menor=numero;
        while(numero!=0) {
soma=soma+numero;
quant=quant+1;
        if(numero>maior) {
maior=numero;
}
        if(numero<menor) {
menor=numero;
}
        printf("\n Digite um numero: ");
            scanf("%f", &numero);
}
        if(quant!=0) {
media=soma/quant;
}
        printf("\n Foram fornecidos %d numeros.", quant);
        printf("\n A soma dos numeros e: %.2f", soma);
        printf("\n A media dos numeros e: %.2f", media);
        printf("\n O menor numero e: %.2f", menor);
        printf("\n O maior numero e: %.2f \n", maior);
return(0);
}


