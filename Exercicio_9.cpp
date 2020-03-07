/*9. Faça um programa C que receba a quantidade de peças vendidas por
vendedor e armazene essas quantidades em um vetor. Receba também o
preço da peça vendida de cada vendedor e armazene esses preços em outro
vetor. Existem apenas dez vendedores e cada vendedor pode vender apenas
um tipo de peça, isto é, para cada vendedor existe apenas um preço. Calcule e
mostre a quantidade total de peças vendidas por todos os vendedores e para
cada vendedor calcule e mostre o valor total da venda, isto é, a quantidade de
peças * o preço da peça. */

#include<stdio.h>

int main () {
    int a, t[10], to=0.0;
    float preco[10], qtde[10];

        for (a=0;a<=9;a++) {
            printf("\n Digite o numero de pecas vendidas pelo vendedor %.0f: ", a+1.0);
                scanf("%f", &qtde[a]);
            printf("\n Digite o preco da peca %.0f: ", a+1.0);
                scanf("%f", &preco[a]);

to=qtde[a]+to;
}
            printf("\n O total de pecas vendidas e: %.d",to);

        for(a=0;a<=9;a++) {
            printf("\n Total da venda %.0f: %.2f \n", a+1.0, qtde[a]*preco[a]);
}
return(0);
}
