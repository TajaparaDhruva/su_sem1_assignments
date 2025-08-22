#include<stdio.h>
int main(){
    int a=1;
    int result=0;
    while(a<=50){
        result=result+a;
        a=a+1;
    }
    printf("%d", result);
    return 0;
}