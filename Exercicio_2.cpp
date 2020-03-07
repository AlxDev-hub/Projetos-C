// 2. O departamento que controla o índice de poluição do meio ambiente mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades, se o índice cresce para 0,4 as do 1º e 2º grupo são intimadas a suspenderem suas atividades e se o índice atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas atividades. Escrever um programa C que lê o índice de poluição medido e emite a notificação adequada aos diferentes grupos de empresas.
#include<stdio.h>
int main () {
float industria;

printf("\n Digite o indice de poluicao: ");
    scanf("%f", &industria);
        if (industria>=0.3 && industria<0.4){
            printf("As industrias do Primeiro grupo seram intimadas a suspenderem suas atividades.");
    }        
        else if (industria>=0.4 && industria<0.5){
            printf("As industrias do Primeiro e Segundo grupo seram intimadas a suspenderem suas atividades.");
    }
        if (industria>=0.5){
            printf("Todas os grupos seram notificados a paralisarem suas atividades.");
    }
return(0);
}
