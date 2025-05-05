#include<stdio.h>
int main(){
    float n1, n2, soma, subtração, multiplicação, divisão;
    int operação;
    printf("inf n1:\n");
    scanf("%f",&n1);
    printf("inf n2:\n");
    scanf("%f",&n2);
    printf("escolha uma opção abaixo:\n");
    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-multiplicação\n");
    printf("4-divisão\n");
    scanf("%d", &operação);
    switch(operação){
        case 1:
        soma=n1+n2;
        printf("soma entre n1 e n2 é: %.2f.",soma);
        break;
        return 1;
        
        case 2:
        subtração=n1-n2;
        printf("subtração entre n1 e n2 é: %.2f.",subtração);
        break;
        return 1;
        
        case 3:
        multiplicação=n1*n2;
        printf("multiplicação entre n1 e n2 é: %.2f.",multiplicação);
        break;
        return 1;
        
        case 4:
        divisão=n1/n2;
        printf("divisão entre n1 e n2 é: %.2f.",divisão);
        break;
        return 1;
    }
    return 0;
}