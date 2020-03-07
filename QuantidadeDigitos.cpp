// 2. Que retorne a quantidade de dígitos presentes em um número (Ex.: 6482 - 4).//

#include<stdio.h>
    int qtdeDigitos (int num) {
        if (num == 0) return 0;
return 1 + qtdeDigitos(num/10);
}
int main(){
    int nrc;
        printf("Informe o numero: ");
            scanf("%d", &nrc);
        printf("A quantidade de digitos e: %d\n", qtdeDigitos(nrc));
}
