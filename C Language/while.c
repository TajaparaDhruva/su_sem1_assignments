#include<stdio.h>
#include<stdbool.h>
int main(){
    int a=0;
    
    while (a<=10){
        
for(int b=2;b<a;b++){
    bool isPrime=true;
        if(a%b==0){
            isPrime = false;
            break;
        }
    
    if(isPrime == true){
        printf("%d is prime num\n", a);
    }
    else{
        printf("%d is not prime num\n",a);
    }
        
}
        a=a+1;
    }
    return 0;
}