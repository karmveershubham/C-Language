#include <stdio.h>

int main() {
	
	int num1,num2;
	char ch;
	
    printf("CALCULATOR\n\n");
	
	printf("A.Addition \nB.Subtraction \nC.Multplication \nD.Division\n");
	printf("Enter your choice.(A-D): \n");
	scanf("%c",&ch);
    printf( "Enter two numbers: ");
	scanf("%d %d", &num1,&num2);

	switch(ch) {
		case 'A':
		case 'a':
			printf("Addition of %d and %d is: %d", num1, num2, num1+num2);
			break;
			
		case 'B':
		case 'b':
			printf("subtraction of %d from %d is: %d", num1, num2, num1-num2);
			break;
			
		case 'C':
		case 'c':
			printf("Multiplication of %d and %d is: %d", num1, num2, num1*num2);
			break;
			
		case 'D':
		case 'd':
			printf("Division of %d by %d is: %d",  num1, num2, num1/num2);
			break;
			
		default:
			printf("Inavalid Choice\nPlease try Again.\n");
			
				
	}
    return 0;
}
	
