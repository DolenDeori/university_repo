#include<stdio.h>


int main(){
    int a , b ;
    printf("Enter 1st number: ");
    scanf("%d" , &a);
    printf("Enter 2nd number: ");
    scanf("%d" , &b);
    printf("The qutient is : %d\n" , (a/b));
    printf("The reminder is : %d\n" , (a%b));
}