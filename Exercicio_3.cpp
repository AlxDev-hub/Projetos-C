// 3. Faça um programa C que receba a idade de um nadador e mostre a sua categoria usando as regras: //

#include<stdio.h>
int main () {
    int idade;
        printf("Digite a idade: ");
            scanf("%d", &idade);
                if (idade>=5 && idade<=7){
                    printf("O nadador e Infantil.\n");
}
                else if (idade>=8 && idade<=10){
                    printf("O nadador e Juvenil.\n");
}
                if (idade>=11 && idade<=15){
                    printf("O nadador e Adolescente.\n");
}
                else if (idade>=16 && idade<=30){
                    printf("O nadador e Adulto.\n");
}
                if (idade>=30){
                    printf("O nadador e Senior.\n");
}
return(0);
}
