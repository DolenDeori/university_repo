#include<stdio.h>

int main(){
    int num , reverseNum = 0 , remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0);
    {
        remainder = num%10;
        reverseNum = reverseNum * 10 + remainder;
        num/=10;

    }
    printf("rseverse of the number is : %d", reverseNum);
    return 0;
    
};