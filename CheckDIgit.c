#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:\t");
    scanf("%c",&ch);

    if(ch>=48 && ch <=57){
        printf("Entered character is a Digit.\n");
    }
    else
        printf("Not a Digit");
    return 0;
}