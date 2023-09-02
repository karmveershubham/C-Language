#include<stdio.h>
int main(){
    int i,j,k=0; j=2*3/4+2.0/5+8/5; k-=--j;
    for(i=0;i<4;i++){
        switch(i+k){
            case 1:
            case 2:printf("case2 world\n");
            case 3:printf("case3 world\n");
            default:printf("default world\n");
        }
    }
    return 0;
}