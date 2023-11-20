// #include <stdio.h>

// int main() {
//   	printf("Use of format specifiers: ");
// 	char ch = 'A';
// 	char str[50] = "Here we use format specifier";
// 	int a = 45;
// 	float b = 12.54;
// 	int c = 34789;
// 	float d = 32.542;
// 	printf("\n charcter :\t %c ", ch);
// 	printf("\n String :\t %s ", str);
// 	printf("\n integer :\t %d", a);
// 	printf("\n float :\t %f", b); 
// 	printf("\n Octal :\t %o", a);
// 	printf("\n Hexadecimal :\t %x", a);
// 	printf("\n int upto 6 digit :\t %6d", c );
// 	printf("\n float upto 6 digit :\t %6f", d);
// 	printf("\n float upto 6 digit integer & decimal upto 2 :\t %6.2f", d);
// 	printf("\n float upto2 decimal :\t %.2f", d);
// }


#include <stdio.h>
 
int main() {
	char c[]="MCAGATE2024";
	char *p=c;
	printf("%s",p+p[3]-p[1]+1);
 
	return 0;
}