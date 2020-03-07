//Cálculo de fatorial//

#include<stdio.h>
int fatorial(int num) {
    if(num == 0)
        return 1;
    else if(num < 0) {
        printf("Erro: Fatorial de numero negativo\n");
}
return num*fatorial(num-1);
}
int main(){
    int fat, valor;
        printf("Digite um numero inteiro: ");
            scanf("%d", &valor);

fat = fatorial(valor);
    printf("\n\nO fatorial de %d e: %d\n", valor, fat);
return(0);
}
