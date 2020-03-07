#include<stdio.h>

int main(){

	int anos;

	printf("Quantos anos voce tem:");
	scanf("%d", &anos);

	if (anos>0 && anos<30){
		printf("Voce ainda e jovem");
	}
    if (anos>=30){
        printf("Voce e velho");
    }

return(0);
}
