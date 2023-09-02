#include<stdio.h>
void printFunction(); //function declaration/prototype

void printFunction(){  //function definition
    printf("Hello\n");
}

int main(){
    printFunction();  //function call

    //pointer to pointer 
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d \n",**pptr);
}