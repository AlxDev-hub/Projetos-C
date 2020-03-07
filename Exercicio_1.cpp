// 1. Um ciclone tropical consiste em uma tempestade muito violenta que, sob determinadas condições, adquire um movimento de rotação em torno de uma região de baixa pressão atmosférica. Um ciclone pode atingir um diâmetro de até 500 km. Furacões são os mais violentos desses ciclones e chegam a produzir ventos de até 320 km/h. Na tabela abaixo, são apresentados alguns dados relativos à classificação dos furacões segundo a escala Saffir-Simpson:Escreva um programa C que leia a velocidade do vento aferida durante uma tempestade e apresente ao usuário a classificação do furacão caso a tempestade possa ser classificada como tal. //

#include<stdio.h>

int main (){
	int velocidade;
	printf("Digite a velocidade do vento:");
	scanf("%d", &velocidade);
	if(velocidade > 62 && velocidade <= 118){
		printf("\n Categoria Tempestade Tropical \n");
	}
	else if(velocidade > 119 && velocidade <= 153){
		printf("\n Categoria 1 \n");
	}
	else if(velocidade > 154 && velocidade <= 177){
		printf("\n Categoria 2 \n");
	}
	else if(velocidade > 178 && velocidade <= 209){
		printf("\n Categoria 3 \n");
	}
	else if(velocidade > 210 && velocidade <= 249){
		printf("\n Categoria 4 \n");
	}
	else if(velocidade > 249){
		printf("\n Categoria 5 \n");
	}
	else if(velocidade < 62){
		printf("\n Nao existe categoria \n");
	}
return(0);	
}
