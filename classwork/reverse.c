#include<stdio.h>
int main()
{ 
    int num, i;
    printf("enter the number");
    scanf("%i",&num);
    for( i=1;i<=10;i++){
        printf("%i x %i = %i\n" , num , i , num*i);
    }
}