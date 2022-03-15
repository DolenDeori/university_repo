#include <stdio.h>
int main()
{
    int num, ln;
    printf("Enter the length of the array: ");
    scanf("%d", &ln);
    char arr[10] = {};
    for (int i = 0; i < ln; i++)
    {
        printf("Enter your value : ");
        scanf("%d", &num);
        arr[i] = num;
    }
    printf("Your array : ");
    for (int j = 0; j < ln; j++)
    {
        printf("%d, ", arr[j]);
    }
    return 0;
};