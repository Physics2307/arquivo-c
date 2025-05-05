#include<stdio.h>
int main(){
float n1, n2;//declaração de variável(is)
printf("inf n1:\n");//salvar e exibir os valores das variáveis
scanf("%f",&n1);
printf("inf n2:\n");
scanf("%f",&n2);
if(n1>n2){ //condicionais
    printf("n1 é maior que n2");
}
else if(n1==n2){
   printf("o n1 é igual ao n2"); 
}
else{
    printf("n2 é maior que n1");
}
return 0;//finalização
}
