#include<stdio.h>
int main(){
int  n, tab, i;
printf("inf n:\n");
scanf("%d",&n);
for(i=0; i<=10; i++){
    tab = n*i;
    printf("%d x %d = %d\n", n, i, tab);

}

return 0;
    
}
