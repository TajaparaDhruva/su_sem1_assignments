#include<stdio.h>
int main(){
    int operation,num1,num2;
    printf("enter num");
    scanf("%d", &operation);
    printf("enter num1");
    scanf("%d", &num1);
    printf("enter num2");
    scanf("%d", &num2);
    switch (operation)
    {
    case 1:printf("num+num2");
    break;
    case 2:printf("num1-num2");
    break;
    case 3:printf("num1%num2");
    break;
    case 4:printf("num1*num2");
    break;
    case 5:printf("num1/num2");
    
    default:printf("not of this");
        break;
    }
}