#include <stdio.h>

int main(){

    int n1 , n2 , n3 , n4 , n5;
    printf("Enter the 1st number : ");
    scanf("%i" , &n1);
    
    printf("Enter the 2nd number : ");
    scanf("%i" , &n2);
    
    printf("Enter the 3ed number : ");
    scanf("%i" , &n3);
    
    printf("Enter the 4th number : ");
    scanf("%i" , &n4);
    
    printf("Enter the 5th number : ");
    scanf("%i" , &n5);
    
    int average = (n1 + n2 + n3 + n4 + n5)/5;

    printf("The average is %i" , average);
}