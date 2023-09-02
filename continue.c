#include<stdio.h>
int main(){
    int n=15, num, sum=0;
    for(int i=0;i<n;i++){
        printf("Enter a number:\t");
        scanf("%d",&num);
        if(num<0){
            continue;
        }
        sum+=num; 
    }
    printf("Sum of positive number enterd is:\t%d", sum);
    return 0;
}