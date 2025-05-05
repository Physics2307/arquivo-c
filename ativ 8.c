#include<stdio.h>
int main(){
    int i=0, soma = 0;
    for(i=0;i<=200;i+=2){
        printf("%d\n", i);
        soma +=i;
    }
    printf("A soma é: %d\n", soma);
}
