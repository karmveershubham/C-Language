#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }

    printf("The number of digits in number is: %d",count);
}
