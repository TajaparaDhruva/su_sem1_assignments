#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    printf("enter num");
    scanf("%d",&num);
    int result=1;
    int a;
    bool isPrime= true;
    for(a=1;a<=num;a=a+1){
        result=result*a;
    }
    printf("%d\n",result);
    if(num%a==0){
        isPrime=false;
    }
    if(isPrime=true){
        printf("Num is prime num");
    }
    else{
        printf("Num is not prime num");
    }
    return 0;
}
