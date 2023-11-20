#include <stdio.h>

int max(int a, int b)
{
    return a>b?a:b ;
}

int findMaxRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", findMaxRec(arr, n));
    return 0;
}