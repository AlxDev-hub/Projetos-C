/* 5. Faça um programa C para resolver este problema. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber:
a. a média do salário da população
b. a média do número de filhos
c. o maior salário;
d. a porcentagem de pessoas com salários até R$1500,00
O final da leitura de dados dar-se-á com a entrada de um salário negativo.
*/
#include<stdio.h>
int main() {
    float salario, sosalario, mesalario, mefilhos, maiorsalario, persalario;
    int numfilhos, sofilhos, quanttotalsalario, quantsalario;
sosalario=0;
sofilhos=0;
quanttotalsalario=0;
quantsalario=0;
        printf("\n Digite o salario: ");
            scanf("%f", &salario);
maiorsalario=salario;
    while(salario>=0) {
        printf("\n Digite o numero de filhos: ");
            scanf("%d", &numfilhos);
sofilhos=sofilhos+numfilhos;
sosalario=sosalario+salario;
quanttotalsalario=quanttotalsalario+1;
    if(salario>maiorsalario) {
maiorsalario=salario;
}
    if(salario<=1500) {
quantsalario=quantsalario+1;
}
        printf("\n Digite o salario: ");
            scanf("%f", &salario);
}
    if(quanttotalsalario>0) {
mesalario=sosalario/quanttotalsalario;
mefilhos=sofilhos/quanttotalsalario;
persalario=quantsalario*100/quanttotalsalario;
        printf("\n A media do salario e: %.2f", mesalario);
        printf("\n A media dos filhos e: %.2f", mefilhos);
        printf("\n O maior salario e: %.2f", maiorsalario);
        printf("\n A porcentagem de pessoas com salarios ate 1500 e: %.2f \n", persalario);
}
return(0);
}
