#include <stdio.h>
#include <stdbool.h>
int main(){
    int a;
    bool isPrime = true;
    printf("Enter a");
    scanf("%d", &a);
    for(int b=2;b<a;b++){
        if(a%b==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        printf("A is prime num");
    }
    else{
        printf("A is not prime num");
    }
    return 0;
}