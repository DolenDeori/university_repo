#include <stdio.h>

int main()
{
    int num, i, check_prime;
    printf("Enter any number : ");
    scanf("%d", &num);
    check_prime = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("Number is not a prime Number");
            check_prime = 0;
            break;
        }
        else
            check_prime = 1;
    }
    if (check_prime == 1)
        printf("The number is prime");
    return 0;
}