#include<stdio.h>

int main()
{
	int a;
	float b;
	char c;
	printf("Enter the value of char : ");
	scanf("%c", &c);
	printf("Enter the value of integer : ");
	scanf("%d", &a);
	printf("Enter the value of float : ");
	scanf("%f", &b);
	c = (int)c;

    //Implicit Conversion
	printf("\nExplicit Conversion>\n");
	printf("Addition in int :\t %d ", (int)(a+b+c));
	printf("\nSubtraction in int :\t %d ", (int)(a-b-c));
	printf("\nAddition in float :\t %f ", (a+b-c));
	printf("\nSubtraction in float :\t %f ", (a-b-c));

    //Explicit conversion
    printf("\n\nExplicit Conversion:\n");
    int d=97;
    char ch= (int) d; 
    printf("\nInteger 97 to Character is: %c ", ch);

    char ch1='a';
    int e = (char) ch1;
    printf("\nCharacter 'a' in integer is: %d ", e);

    return 0;

}