#include <stdio.h>
int main()
{
    int num;

    char arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your value : ");
        scanf("%d", &num);
        arr[i] = num;
    }
    printf("Your array : ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d, ", arr[j]);
    }
    return 0;
};