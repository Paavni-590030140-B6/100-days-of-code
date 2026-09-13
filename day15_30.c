//Write a program to calculate the reverse of a number.
#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Enter your number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}