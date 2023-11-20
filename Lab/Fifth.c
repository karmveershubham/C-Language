#include<stdio.h>
int main(){

    enum  week{sunday, monday, tuesday, wednesday, thursday, friday, saturday};   
    enum week day;
    day = thursday;

    printf("The values of the weekdays is: ");
    for (int i=sunday; i<=saturday; i++){
        printf("%d ", i);
    }

    printf("The day number OF THURSDAY stored in enum VARIABLE day is %d \n", day);

    return 0;
}