#include<stdio.h>
#include<math.h>
int main(){
    int num,n, len=0, sum=0, rem;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;

    while(n!=0){
        n=n/10;
        len++;
    }
    printf("length: %d \n",len);

    n=num;
    while(n!=0){
        rem =n%10;
        n=n/10;
        sum=sum + pow(rem,len);
        printf("sum: %d \n",sum);
    }

    if(sum==num){
        printf("%d is an Armstrong number.",num);
    }else{
        printf("%d is not an Armstrong number.",num);
    }

    
}