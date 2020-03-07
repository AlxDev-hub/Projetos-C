/* Faça um programa receba dois números e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo.
        Sendo que o valor de returno será 1 se positivo,
        0 se negativo ou -1 se for igual a 0.
    - Declare a função como: int verifica(int num);
*/

#include <stdio.h>
int verifica(int num) {
    if(num > 0) return 1;
    if(num < 0) return 0;
    if(num == 0) return -1;
}
int main() {
    int n1, n2;
        printf("Informe os dois numeros: ");
            scanf("%d %d", &n1, &n2);
        printf("Retorno de %d e: %d \nRetorno de %d e: %d \n", n1, verifica(n1), n2, verifica(n2));

return(0);
}


