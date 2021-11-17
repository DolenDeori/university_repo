#include<stdio.h>
#include<math.h>

int main(){
    float radius;
    printf("Enter The Radius : ");
    scanf("%f" , &radius);
    float area = 3.14*(radius*radius);
    printf("The area is : %f cm" , area);
}