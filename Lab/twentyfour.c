#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int *p=&arr[0];
    printf("Printing the elemets of array: ");
     for(int i=0;i<n;i++){
        printf("%d ", *(p+i));
    }

    return 0;

}