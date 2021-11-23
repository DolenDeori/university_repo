#include <stdio.h>

int main(){
    int age;
    printf("What's your age? ");
    scanf("%i" , &age);

    if (age >= 18)
        printf("You are eligible for voting.");
    else
        printf("You are not eligible for voting.");
}