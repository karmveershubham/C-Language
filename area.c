#include<stdio.h>

int main(){
    float side;
    printf("Enter the Side of the Square:\t");
    scanf("%f", &side);

    printf("The Area of the square is:\t %f \n", side*side);

    float radius;
    printf("Enter the radius of the ciircle:\t");
    scanf("%f", &radius);

    printf("The Area of the Circle is:\t %f \n", 3.14*radius*radius);
    
    return 0;

}