#include <stdio.h>

int main(void){
    int x , y , z;
    printf("Enter the 1st number: ");
    scanf("%i" , &x);
    printf("Enter the 2nd number: ");
    scanf("%i" , &y);
    printf("Enter the 3ed number: ");
    scanf("%i" , &z);

    if(x > y && x < z){
         printf("1st number is greater %i" , x);
    }
    else if(y > x && y > z){
        printf("2nd number is greatr %i" , y);
    }   
    else{
        printf("3ed Number is greater %i" ,z);
    }

}