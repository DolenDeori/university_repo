#include <stdio.h>

int main(){
    int a , b;
    printf("Enter the number : ");
    scanf("%i" , a);
    printf("Enter the number to divide : ");
    scanf("%i" , b);

    printf("The remainder is %i" , a%b);
}