#include <stdio.h>

int main()
{
    int on, num, rev_num = 0, remainder;
    printf("Enter any Number : ");
    scanf("%d", &num);
    on = num;
    while (num > 0)
    {
        remainder = num % 10;
        rev_num = remainder + (rev_num * 10);
        num /= 10;
    }
    printf("%d , %d\n", on, rev_num);
    if (on == rev_num)
        printf("Its a Palindrome");
    else
        printf("not a Plaindrome");
    return 0;
}