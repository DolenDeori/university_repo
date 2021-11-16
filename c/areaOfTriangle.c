#include <stdio.h>

int main(){
    float base , height;
    printf("Enter the base: ");
    scanf("%i" , &base);
    printf("Enter the height: ");
    scanf("%i" , &height);

    float area = (height*base)/2;
    printf("The area is %.2f" , area);
}