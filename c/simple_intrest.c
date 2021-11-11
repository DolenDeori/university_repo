// folmula
/* 
I = p*r*t/100 
*/

#include<stdio.h>
int main(){
    float I, P , R , T;
    printf("Enter the principle");
    scanf("%f" , &P);
    printf("Enter the rate of intrest");
    scanf("%f" , &R);
    printf("Enter the Time");
    scanf("%f" , &T);
    I = P*R*I/100;
    printf("The value is : %f" , I);
}