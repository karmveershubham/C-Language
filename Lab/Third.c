#include<stdio.h>
int main(){
	char str[20];
	printf("Enter String value:\t");
	scanf("%s", str);
	printf("Enterd string is:\t %s \n", str);
	
	int num;
	printf("\nEnter integer value:\t");
	scanf("%d", &num);
	printf("Enterd integer is:\t %d \n", num);
	
		
	char ch;
	printf("\nEnter character value:\t");
	scanf("\n%c", &ch);  //for taking charcater value after an integer we us eextra \n with format s[pecifier.
	printf("Enterd character is:\t %c \n", ch);
	
		
	float real;
	printf("\nEnter real/float value:\t");
	scanf("%f", &real);
	printf("Enterd real is:\t %f \n", real);
	
	double largereal;
	printf("\nEnter double value:\t");
	scanf("%lf", &largereal);
	printf("Enterd double is:\t %lf \n", largereal);
	
	unsigned integer;
	printf("\nEnter unsigned value:\t");
	scanf("%i", &integer);
	printf("Enterd real is:\t %i \n", integer);
	
	int octal=0;
	printf("\nEnter decimal value:\t");
	scanf("%d", &octal);
	printf("Octal value of integer %d  is:\t %o \n",octal, octal);
	
	return 0;
}
