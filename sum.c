#include<stdio.h>
int main(){
int i,N,sum=0;
printf("enter the value of n\t");
scanf("%d",&N);
for (i=1;i<=N;i++)
{
    sum+=i;
}
printf("sum of natural numbers %d",sum);
}