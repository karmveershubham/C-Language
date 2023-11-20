#include<stdio.h>
int main(){
    printf("To print the half pyramid using star.\n");
    printf("Enter the height: ");
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=0; j<i; j++){
             printf("*  ");
        }
        printf("\n");
    }

}