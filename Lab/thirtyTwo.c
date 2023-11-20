#include<stdio.h>
#include<string.h>
int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d \n", strlen(alphabet));   // 26
    printf("%d  \n", sizeof(alphabet));   // 27

    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s  \n", str1);

    char str3[20] = "Hello World!";
    char str4[20];

    // Copy str1 to str2
    strcpy(str4, str3);

    // Print str2
    printf("%s  \n", str2);


    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d \n", strcmp(str5, str6));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d \n", strcmp(str5, str7));  // Returns -4 (the strings are not equal)

}