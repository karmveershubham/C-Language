#include<stdio.h>
int main(){

    int num;
    do{
        printf("\nEnter a negative value:");
        scanf("%d",&num);
        printf("Entered value is: %d",num);
    }while(num<0);
    return 0;
}