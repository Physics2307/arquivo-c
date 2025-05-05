#include<stdio.h>
int main(){
    float n1, n2, m;//declaração de variáveis
    printf("inf n1:\n");
    scanf("%f",&n1);
    printf("inf n2:\n");
    scanf("%f",&n2);
    m=(n1+n2)/2;
    if(m>=7){
        printf("aluno aprovado, por média suficiente: média=%.2f.",m);
    }
    else{
        printf("aluno reprovado por média insuficiente: média=%.2f.",m);
    }
    return 0;
}