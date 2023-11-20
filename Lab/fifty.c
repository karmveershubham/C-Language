#include <stdio.h>
// Recursive function to convert n
// to its binary equivalent
int decimalToBinary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2 + 10 *
                decimalToBinary(n / 2));
    }
}
int main()
{
    //num for decimal number
    int num;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    //Called function
    printf ("%d",decimalToBinary(num));
    return 0;
}