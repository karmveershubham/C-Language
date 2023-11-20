#include<stdio.h>
int main(){

    int a[]={5,7,8,9,4};

    int size=sizeof(a)/sizeof(a[0]);

    int b[size];

    for(int i=0;i<size;i++){
        b[(size-i)-1]=a[i];
    }

    for(int i=0;i<size;i++){
        printf("%d ", *(b+i));
    }
}