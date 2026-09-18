//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    int n, d, ans = 0, place = 1;

    printf("enter binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        d = n % 10;

        if(d == 0)
            d = 1;
        else
            d = 0;

        ans = ans + d * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %d", ans);

    return 0;
}