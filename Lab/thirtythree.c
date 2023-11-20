#include<stdio.h>
#include<string.h>
int main(){

    char alphabet[] = "abcdefghijklmnophhhhhhhhhhhhqrstuvwxyz";

    for(int a=97; a<97+26; a++){
        int count=0;
        for(int i=0;i<strlen(alphabet); i++){
            if(alphabet[i]==a){
                count++;
            }
        }
        printf("%c:%d \t", a , count);
    }




}