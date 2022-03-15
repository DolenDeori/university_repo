#include <stdio.h>

int swap(int x, int y)

{

    int t;

    printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);

    t = x;

    x = y;

    y = t;

    printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
}

int main()

{

    int x, y, t;

    printf("Enter two integers\n");

    scanf("%d%d", &x, &y);

    swap(x, y);

    return 0;
}