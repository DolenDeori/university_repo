#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[1000], size, i;
    int max1, max2;

    /* Input size of the array */
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;

    /*
     * Check for first largest and second
     */
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}