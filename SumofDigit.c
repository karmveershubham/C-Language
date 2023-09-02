#include<stdio.h>
int sumOfDigit(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        n/=10;
        sum+=r;
    }
    return sum;

}
int main(){
    int n;
    printf("Enter a number:\t");
    scanf("%d", &n);
    int sum;
    sum=sumOfDigit(n);
    printf("%d",sum);
    return 0;
}