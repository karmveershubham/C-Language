#include<stdio.h>

void Squeeze(char s[]){
    char t[100];
    int i,j;
    for(i=j=0; s[i]!='\0'; i++){
        if(s[i]!='c'){
            t[j++]=s[i];
        }
    
    }
    t[j]='\0';
    printf("%s",t);
    

    
}

int main(){
    char s[]="Shcubhcamc";
    Squeeze(s);
}