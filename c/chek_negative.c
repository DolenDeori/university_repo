#include <stdio.h>

int main(void){
    int num;
    printf("Enter your number: ");
    scanf("%i" , num);
    if (num > 0){
        printf("Your number is positive");
    } 
    else if ( num < 0) {
        printf("Your number is negative");
    }
    else{
        printf("Your number is equal");
    }
}