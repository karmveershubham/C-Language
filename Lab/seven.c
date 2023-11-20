#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter the value of a & b : ");
	scanf("%d %d",&a,&b);
	printf("\n AND operator :\t %d", a & b);
	printf("\n OR operator :\t %d", a | b);
	printf("\n XOR operator :\t %d", a ^ b);
	printf("\n Right shift operator :\t %d", a>>2);
	printf("\n Left shift operator :\t %d", a<<2);
	printf("\n Complement operator :\t %d %d", ~a,~b);
	printf("\n Addition :\t %d", a+=b);
	printf("\n Subtraction :\t %d", a-=b);
	printf("\n Multiplication :\t %d", a*=b);
	printf("\n Division :\t %d", a/=b);
	return 0;
}
