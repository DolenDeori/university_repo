#include<stdio.h>

int main(){
    int num , factorial;
    printf("Enter the number : ");
    scanf("%i" , &num);

    factorial = num;
    for (int i = num; i > 1; i--){
        factorial *= i - 1;
    }
    printf("%i",factorial); 
}