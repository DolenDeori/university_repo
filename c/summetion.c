#include <stdio.h>

int main(){
    int n , sum;
    printf("Enter the nth number : ");
    scanf("%i" , &n);

    sum = 0;
    for (int i = 0 ; i <= n ; i++){
        sum += i;
    }
    printf("The summetion is : %i" , sum);
}