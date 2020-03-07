/* 10. Faça um programa C que carregue dois vetores de dez elementos numéricos cada um e mostre um vetor resultante da intercalação desses dois vetores. */

#include<stdio.h>
int main() {
    float v1[10];
    float v2[10];
    float v3[10*2];
    int i,j;

for(i=0;i<10;i++) {
    printf("\n Digite o numero do primeiro vetor: ", i+1);
        scanf("%f", &v1[i]);
}
for(i=0;i<10;i++) {
    printf("\n Digite o numero do segundo vetor: ", i+1);
        scanf("%f", &v2[i]);
}
j=0;
for(i=0;i<10;i++) {
v3[j]=v1[i];
j++;
v3[j]=v2[i];
j++;
}
for(i=0;i<10*2;i++) {
    printf("\n %.2f", v3[i]);
}
return(0);
}
