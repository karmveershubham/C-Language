#include<stdio.h>

char t[]="shubham";
char s[10];

char * strcpy (char *s , char *t){
    int i;
    i=0;
    while((s[i]=t[i])!='\0'){
        i++;
    }
    return s;
}

int main(){
    printf("%s" ,strcpy(s,t));
}