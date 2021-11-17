#include <stdio.h>

int main(){
    float base , height;
    printf("Enter the base: ");
    scanf("%f" , &base);
    printf("Enter the height: ");
    scanf("%f" , &height);

    float area = (height*base)/2;
    printf("The area is %f" , area );
}