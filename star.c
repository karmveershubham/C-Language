#include<stdio.h>
int main(){
    int i,j,k,rows=4;
    for(i=1;i<=rows;i++){
        for(j=i; j<rows; j++){
            printf(" ");
        }
        for(k=1;k<(i*2); k++){
            printf("*");
        }
        printf("\n");
    }
}