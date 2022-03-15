#include <stdio.h>

void main()

{

    int i, n, a[100];

    printf("Input the lenght of the array :");

    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);

    for (i = 0; i < n; i++)

    {

        printf("element - %d : ", i);

        scanf("%d", &a[i]);
    }

    printf("\nThe array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("% 5d", a[i]);
    }

    printf("\nThe array in reverse :\n");

    for (i = n - 1; i >= 0; i--)

    {

        printf("% 5d", a[i]);
    }

    printf("\n\n");
}