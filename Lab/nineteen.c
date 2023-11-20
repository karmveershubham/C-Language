#include<stdio.h>
int main(){
    printf("To print the half pyramid using star.\n");
    printf("Enter the height: ");
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int j;
        for(j=n; j>i; j--){
            printf("  ");
        }
        for(int k=0;k<i*2-1;k++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
    
}