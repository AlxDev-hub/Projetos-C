// Cálculo da soma de N números inteiros//

#include<stdio.h>

int soma (int n) {
    if(n==1){
        return(1);
    }else{
        return(n+soma(n-1));
    }
}
int main(){
    int valor;
        printf("Digite um numero inteiro: ");
            scanf("%d", &valor);
        printf("\n\nA soma dos N numeros inteiros ate %d e: %d\n", valor, soma(valor));
return(0);
}
