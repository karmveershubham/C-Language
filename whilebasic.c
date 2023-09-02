#include<stdio.h>

int main(){
    int a =0;
    while (a<20)
    {
        printf("a value :%d\n",a);
        a++;
    }
   

    int b;
    do {
        printf("Enter a negative value:\t");
        scanf("%d",&b);
    }while(b<0);
        printf("positive value Entered is n: %d",b);
    
    return 0;
}