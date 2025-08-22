#include<stdio.h>
int main(){
    int b;
    scanf("%d", &b);
    for(int a=1;a<=10;a=a+1){
        printf("%d\n",a*b);
    }
    return 0;
}