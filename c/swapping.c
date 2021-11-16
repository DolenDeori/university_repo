#include <stdio.h>

int main(){
    int x , y , t;
    x = 10;
    y = 20;

    t = y;
    y = x;
    x = t;

    printf("%i %i" , x , y);
}