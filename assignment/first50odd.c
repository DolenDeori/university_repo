#include<stdio.h>

int main(){
    printf("First 50 odd numbers are\n");
    for (int i = 1 ; i <= 50 ; i++){
        if (i % 2 != 0)
        printf("%i\n", i);
    }
}