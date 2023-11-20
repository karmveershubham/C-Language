#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

    int vow = 0, digit=0, conso=0, space=0;
    char line[] = "abcdefghijklmnophhhhhhhhhhhhqrstuvwxyz";
        
       
    for (int i = 0; line[i] != '\0'; ++i) {

        line[i] = tolower(line[i]);

        
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u') {

        ++vow;
        }

        else if ((line[i] >= 'a' && line[i] <= 'z')) {
        ++conso;
        }

        else if (line[i] >= '0' && line[i] <= '9') {
        ++digit;
        }

        else if (line[i] == ' ') {
        ++space;
        }
    }
        printf("Vowels:%d  Consonants:%d Whitespace:%d Digits:%d " , vow, conso, space, digit);
       
}


