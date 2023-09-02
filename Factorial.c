#include<stdio.h>
int main(){
    unsigned long long fact=1;
    int num;
    printf("Enter a number to find factorial:");
    scanf("%d", &num);
    if(num<0){
        printf("Factorial of negative number not Exist.");
    }
    else if(num==0){
        printf("The factorial of %d is: %llu",num,fact);
    }else
    {  for(int i=1;i<=num; i++){
            fact*=i;
        }
        printf("The factorial of %d is: %llu", num, fact);  //unsigned long long format specifier is %llu
    }
}
    