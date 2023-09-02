#include<stdio.h>
int main(){
    int age=19;
    int _age=23;

    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u,%u, difference %u \n",ptr ,_ptr, ptr - _ptr);
    printf("comparison: %u", ptr==_ptr);

    return 0;
}