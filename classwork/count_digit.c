#include<stdio.h>

int main(){
    int n , count = 0;
    printf("Enter your number : ");
    scanf("%i", &n);
    while (n!=0)
    {
        count++;
        n/=10;
    }
    printf("The digit is : %d", count);
    
    
}