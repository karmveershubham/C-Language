#include<stdio.h>
int main(){

    int a[]={4,3,8,9,7,6,54,9};
    
    int size=sizeof(a)/sizeof(a[0]);
    int b[size-1];
    printf("Enter the position in array you want to delete: ");
    int pos;
    scanf("%d", &pos);

    if(pos-1>size){
        printf("Deletion is not possible");
    }else{
        for(int i=0; i<size-1; i++){
            if(i<pos-1){
                b[i]=a[i];
            }else{
                b[i]=a[i+1];
            }
        }
        for(int i=0;i<size-1;i++){
            printf("%d ", *(b+i));

        }

    }
}
