#include<stdio.h>

int main(){
    int m,n;

    printf("Give the size of Matrix: ");
    scanf("%d %d", &m, &n); 

    int Mat1[m][n];
    int Mat2[m][n];
    

    printf("Give the values for Matrix 1: ");

    for(int i=0; i<m; i++){
        for(int j=0;  j<n; j++){
            int val;
            scanf("%d", &val);
            Mat1[i][j]=val;
        }
        
    }

    printf("Give the values for Matrix 2: ");

    for(int i=0; i<m; i++){
        for(int j=0;  j<n; j++){
            int val;
            scanf("%d", &val);
            Mat2[i][j]=val;
        }
        
    }

    

    printf("The Resultant Matrix is: \n");

    for(int i=0; i<m; i++){
        for(int j=0;  j<n; j++){
            printf("%d  ", Mat1[i][j]+Mat2[i][j]);
        }
        printf("\n");
    }


}