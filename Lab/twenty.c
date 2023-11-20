#include<stdio.h>
int main(){
    int n,num,rem,reversednum;
    printf("Enter a number:\t");
    scanf("%d", &num);
    n=num;

    while(n!=0){
        rem=n%10;
        reversednum=reversednum*10+rem;
        n/=10;
    }

    (num==reversednum)?printf("%d is a palindrome",num):printf("%d is not a palindrome.",num);

}