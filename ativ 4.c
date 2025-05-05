#include<stdio.h>
int main(){
    int i;
    printf("inf i:\n");
    scanf("%d",&i);
    if(i<18){
        printf("proibido votar!");
    }
    else if(i=18 && i<=70){
        printf("voto obrigatório!");
    }
    else{
        printf("voto facultativo!");
    }
    return 0;
}