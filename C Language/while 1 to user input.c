#include<stdio.h>
int main(){
    int a=1;
    int num;
    printf("enter num");
    scanf("%d", &num);
    while(a<=num){
        printf("%d\n", a);
        a=a+1;
    }
}