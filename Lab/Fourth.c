#include <stdio.h>

int main()
{
	int size_of_int = sizeof(int);
	int size_of_char = sizeof(char);
	int size_of_float = sizeof(float);
	int size_of_double = sizeof(double);
	int size_of_short = sizeof(short);
	int size_of_long = sizeof(long);
	int size_of_long_long = sizeof(long long);
	int size_of_signed = sizeof(signed);
	int size_of_unsigned = sizeof(unsigned);
	
	printf("The size of int data type :\t %d\n", size_of_int);
	printf("The size of char data type :\t %d\n",size_of_char);
	printf("The size of float data type :\t %d\n",size_of_float);
	printf("The size of double data type :\t %d\n",size_of_double);
	printf("The size of short data type :\t %d\n",size_of_short);
	printf("The size of long data type :\t %d\n",size_of_long);
	printf("The size of long long data type: %d\n",size_of_long_long);
	printf("The size of signed data type :\t %d\n",size_of_signed);
	printf("The size of unsigned data type : %d\n",size_of_unsigned);
	return 0;
}
