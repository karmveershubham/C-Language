#include<stdio.h>
int main(){
    int a[]={1,4,3,9,8};
    int b[]={1,3,9};

    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);

    int count=0;
    for(int i=0;i<size1; i++){
        for(int j=0; j<size2; j++){
            if(a[i]==b[j]){
                printf("Common Element");
                return 0;
            }
            else
                continue;
        }
        count++;
    }

    if(count==size1){
        printf("No common Element");
    }

}