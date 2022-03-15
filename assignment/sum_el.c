#include <stdio.h>
int main()
{
    int arr[100] = {}, sum = 0, ln, num;
    printf("Enter the length of the array : ");
    scanf("%d", &ln);
    for (int i = 0; i < ln; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &num);
        arr[i] = num;
    }
    for (int j = 0; j < ln; j++)
    {
        sum += arr[j];
    }
    printf("The sum of all element of the array is: %d", sum);
    return 0;
};