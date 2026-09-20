//#include <stdio.h>

int main()
{
    int a, b, c, i, f, sum = 0;

    printf("enter a number: ");
    scanf("%d", &a);

    b = a;

    while (b > 0)
    {
        c = b % 10;
        f = 1;

        for (i = 1; i <= c; i++)
        {
            f = f * i;
        }

        sum = sum + f;
        b = b / 10;
    }

    if (sum == a)
        printf("strong number");
    else
        printf("not a strong number");

    return 0;
}