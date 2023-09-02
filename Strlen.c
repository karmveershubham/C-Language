#include<stdio.h>

int strlen(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i-1;
}
int main(){

    char c[100];
    printf("Enter the String:");
    fgets(c,100,stdin);
    printf("Length of string: %d", strlen(c));
}
