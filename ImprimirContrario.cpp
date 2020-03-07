#include<stdio.h>
int main(){
    int i;
    char vet[10];

    for(i=0; i<10; i++){
        scanf("%s", &vet[i]);
    }
    for(i=9; i>=0; i--){
        printf("%c", vet[i]);
    }
return(0);
}
