//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
        printf("Roots are real and different");

    else if(d == 0)
        printf("Roots are real and same");

    else
        printf("Roots are complex");

    return 0;
}