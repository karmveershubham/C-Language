#include<stdio.h>
int main(){

    struct company{
        char name[20];
        char address[50];
        long long phone;
        char video[20];
    };

    struct company c1 ={"Shubham", "Delhi", 7369968466, "video"};
    struct company c2;
    printf("Enter the name, Address, Phone number:\n");
    scanf("%s %s %lld",c2.name, c2.address, &c2.phone);


    printf("%s %s %lld\n", c1.name, c1.address, c1.phone);
    printf("%s %s %lld\n", c2.name, c2.address, c2.phone);

}