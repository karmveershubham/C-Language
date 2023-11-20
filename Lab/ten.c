#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:\t");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("Greatest value is:\t %d",a);
    }
    else if(b>c){
        printf("The greatest value is:\n %d",b);
    }
    else{
        printf("The greatest value is;\t %d",c);
    }
    
    return 0;
}