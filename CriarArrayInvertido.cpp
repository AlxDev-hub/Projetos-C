//Fazer um programa em C que lê um array de caracteres e cria um outro array em que os caracteres estão totalmente invertidos, por exemplo, ler “MARCONI” e retornar “INOCRAM”//

#include <stdio.h>
#include<string.h>
void invert_original(char *str) {
    int i, f;
    char aux;
    for(f=0; str[f] != '\0'; f++);
    for(i=0, f--; f>=i; f--, i++) {
        aux = str[i];
        str[i] = str[f];
        str[f] = aux;
    }
}
int main() {
    char strOrg[100], strInv[100];
    printf("Informe a string desejada: ");
    scanf("%s", strOrg);
    strcpy(strInv, strOrg);
    invert_original(strInv);
    printf("A string %s invertida e: %s \n", strOrg, strInv);
}
