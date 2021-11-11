#include<stdio.h>
#include<math.h>

int main(){
    int radius , pi;
    printf("Enter The Radius : ");
    scanf("%f" , &radius);
    int area = 3.14*(radius*radius);
    printf("The area is : %i cm" , area);
}