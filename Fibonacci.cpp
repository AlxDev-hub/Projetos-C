// 1. Para calcular o Fibonacci de um número qualquer. (Fibonacci – cada elemento, a partir do terceiro, é obtido somando-se os dois anteriores. Veja: 1+1=2, 2+1=3, 3+2=5 e assim por diante).//

#include<stdio.h>
    int fibonacci(int num)
{
    if(num==1 || num==2)
        return 1;
    else
        return fibonacci(num-1) + fibonacci(num-2);
}
int main() {
    int n, i;
        printf("Digite a quantidade de termos da sequencia de fibonacci: ");
            scanf("%d", &n);
        printf("\n A sequencia de fibonacci e: \n");
            for(i=0; i<n; i++)
                printf("%d\n", fibonacci(i+1));
return(0);
}
