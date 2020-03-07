/* 8. Faça um programa C que leia um código numérico inteiro e um vetor de cinco posições de números reais. Se o código for zero, termine o programa. Se o código for 1, mostre o vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa. */

#include<stdio.h>
int main() {
    float vetor[9];
    int i, codigo;
        for(i=0; i<9;i++) {
    printf("\n Digite o numero: ", i+1);
        scanf("%f", &vetor[i]);
}
        do {
    printf("\n Digite o codigo desejado: ");
        do {
            scanf("%d", &codigo);
}
        while((codigo<0)||(codigo>2));
        switch(codigo) {
        case 1:
    printf("\n O vetor na direita e: ");
        for(i=0;i<9;i++) {
    printf("\n %.2f", vetor[i]);
}
break;
        case 2:
    printf("\n O vetor na ordem inversa e: ");
        for(i=9-1;i>=0;i--) {
    printf("\n %.2f", vetor[i]);
}
break;
}
}
while(codigo!=0);
return(0);
}

