#include<stdio.h>

int main(){
    int m=3;
    int Mat1[m][m];
    int Mat2[m][m];
    

    printf("Give the values for Matrix 1:\n");

    for(int i=0; i<m; i++){
        for(int j=0;  j<m; j++){
            int val;
            scanf("%d", &val);
            Mat1[i][j]=val;
        }
        
    }

    printf("Give the values for Matrix 2:\n");

    for(int i=0; i<m; i++){
        for(int j=0;  j<m; j++){
            int val;
            scanf("%d", &val);
            Mat2[i][j]=val;
        }
        
    }

    

    printf("The Resultant Matrix is: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            int sum=0;
            for(int k=0;  k<m; k++){
                sum = sum + Mat1[i][k] * Mat2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

}