#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    int lower,upper,step;
    upper=300;
    lower=0;
    step=20;
    fahrenheit =lower;
    printf("Fahrenheit \t\t Celcius\n");
    while(fahrenheit<=upper){
        celcius=5*(fahrenheit-32)/9;
       
        printf("%f\t\t %f\n",fahrenheit,celcius);
        fahrenheit=fahrenheit+step;
    }
    
    return 0;
}