#include<stdio.h>

int main(){
    int m=3;
    int n=3;
    int arr[m][n];

    printf("User behen k lode give the values for 3X3 Matrix: ");

    for(int i=0; i<m; i++){
        for(int j=0;  j<n; j++){
            int val;
            scanf("%d", &val);
            arr[i][j]=val;
        }
    }

    printf("USer behen k lode give the index number: ");
    int var1,var2;
    scanf("%d  %d", &var1,&var2);

    printf("The value at given index is:  \t %d", arr[var1-1][var2-1]);






}