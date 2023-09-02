#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (int i=1 ; i<=10 ;  i++)
    {
        printf("%d X %d = %d\n\n",num,i,(num*i));
    }

    return 0;
}