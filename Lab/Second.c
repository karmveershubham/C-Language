#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character:\t");
	ch = getchar();  //get a single character
	printf("\nEntered character is:\t");
	putchar(ch);  //print a single character
	return 0;
}
