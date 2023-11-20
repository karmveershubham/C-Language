#include<stdio.h>
#include <string.h>

void reverse(char s[]){
    int c,i,j;
    for(i=0, j=strlen(s)-1; i<j; i++, j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }

    printf("%s", s);
}

void itoa(int n){  //integer to  string Ex: integer 123 to string 123
    char s[50];
    int i,sign;
    if((sign=n)<0)
        n=-n;

    i=0;
    do{
        s[i++]=n%10+'0';
    }while((n/=10)>0);

    if(sign<0)
        s[i++]='-';
    
    s[i]='\0';
    reverse(s);
}



void atoi(char s[]){   //string to integer. Ex: string 123 to integer 123
    int i,n;
    n=0;
    for(i=0;s[i]>='0' &&s [i]<='9';i++){
        n=10*n +(s[i]-'0');
    }

    printf("\n%d ", n);
}

int main(){
    char s[]="78";
    itoa(65);
    atoi(s);
}