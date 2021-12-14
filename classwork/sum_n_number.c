#include<stdio.h>

int main(){
    int num , sum ;
    printf("Enter the number : ");
    scanf("%i" , &num);
    sum = 0;
    for (int i = 0; i <= num ; i++){
        sum += i;
    }
    printf("The average of the numbers are = %i" , sum/num);
}