#include<stdio.h>
int main(){

    void swap(int *a, int *b){
    int temp;
    c= *a;
    *a= *b;
    *b= temp;
    printf("Swap call by function\n a:%d \t b:%d",*a,*b);
    }

    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b); //call by reference
    printf("\nSwap call by main:\n a:%d \t b:%d",a,b);
    
}

