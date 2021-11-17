#include <stdio.h>

int main(){
    float a , area;
    printf("Enter the side : ");
    scanf("%f" , &a);
    area = a*a;
    printf("Area of the rectangle is : %.2f" , area);
}