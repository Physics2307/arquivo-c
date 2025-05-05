#include<stdio.h>
int main(){
    int n;//declaração de variável(is)
    printf("inf n:\n");//exibição de variável
    scanf("%d",&n);
    if(n%2==0){//condição 1
        printf("numero par");
    }
    else{//condição 2
        printf("numero impar");
    }
    return 0;//finalização
}