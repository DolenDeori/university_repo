#include <stdio.h>

int main(){
    int x , y;
    printf("Enter the first Number: ");
    scanf("%i" , &x);
    printf("Enter the second Number: ");
    scanf("%i" , &y);

    if (x > y){
        printf("%i is greater" , x);
    }
    else if (x < y){
        printf("%i is greater" , y);
    }
    else{
        printf("both number are equal");
    }
}