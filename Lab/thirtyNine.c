#include<stdio.h>
#include<string.h>

int main(){

    char line[150];
    
    printf("Enter a line of string: ");
    scanf("%s", line);

    int p=0;
    int q=strlen(line)-1;
    while(q>p){
        if(line[p++]!=line[q--]){
            printf("%s is not a palindrome.", line);
            return 0;
        }
    }
    printf("%s is a palindrome.", line);
}
