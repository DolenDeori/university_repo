#include <stdio.h>

int main(){
    float l , b , area;
    printf("Enter the length : ");
    scanf("%f" , &l);
    printf("Enter the breadth : ");
    scanf("%f" , &b);
    area = l*b;
    printf("Area of the rectangle is : %.2f" , area);
}