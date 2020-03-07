#include<stdio.h>

int main(){

	int i1 = 7, i2 = 3;
	float f1 = 7.0, f2 = 3.0;

	printf("Variaveis inteiras (i1 = %d; i2 = %d) => rl = %d rF = %f \n", i1, i2, i1/i2, i1/i2);
	printf("Variaveis flutuantes (f1=%f; f2=%f) => rl = %d rF = %f \n", f1, f2, f1/f2, f1/f2);
	printf("O resto da divisao de %d por %d eh %d \n\n", i1, i2, i1%i2);

return(0);
}
