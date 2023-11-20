#include<stdio.h>
int isPrime(int n){

    int flag=0;
    for(int i=2;i<=n/2; i++){ //we can use i<=sqrt(n) too that will make it more optimised.
        if(n%i==0)
            flag=1;
    }
    return flag;

}
int main(){
    printf("Enter a number:\t");
    int num;
    scanf("%d",&num);
    if(isPrime(num)==0){
        printf("%d is a prime number.",num);
    }else{
        printf("%d is not a prime number.", num);
    }
}