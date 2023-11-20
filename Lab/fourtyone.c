#include<stdio.h>
int main(){
    struct complex {
        int x;
        int y;
    };

    struct complex c1,c2;
    printf("Enter the first complex number(x+iy):");
    scanf("%d %d", &c1.x,&c1.y);

    printf("Enter the second complex number(x+iy):");
    scanf("%d %d", &c2.x,&c2.y);

    printf("Addition of complex Number: %d + %di ",c1.x+c2.x, c1.y+c2.y );
    
    printf("\nSubtraction of complex Number: %d + %di ",c1.x-c2.x, c1.y-c2.y );
    
}