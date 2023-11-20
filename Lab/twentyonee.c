//Fibonacci sequence
#include<stdio.h>

int main(){

    int fib(int i){
        int fib0=0;
        int fib1=1;
        if(i==0){
            return fib0;
        }else if(i==1){
            return fib1;
        }else{
            return (fib(i-2)+fib(i-1));
            
        }
    }

    printf("Enter rvalue of  N terms to print Fibonaaci sequence: ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int res;
        res=fib(i); 
       printf("%d \t", res);    
    }
}
       


