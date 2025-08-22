#include<stdio.h>
int main(){
    int a=1;
    int num;
    printf("enter num");
    scanf("%d", &num);
    int result=1;
    while(a<=num){
        result=result*a;
        a=a+1;
    }
    printf("%d", result);
}