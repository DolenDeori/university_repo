#include <stdio.h>
int main()
{
    int num1, num2, operation;
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);
    printf("Enter the operator \n 1 (+) \n 2 (-) \n 3 (/) \n 4 (*):");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        printf("%d", (num1 + num2));
        break;
    case 2:
        printf("%d", num1 - num2);
        break;
    case 3:
        printf("%.3f", num1 % num2);
        break;
    case 4:
        printf("%d", num1 * num2);
        break;
    default:
        printf("Wrong option");
        break;
    }
    return 0;
};