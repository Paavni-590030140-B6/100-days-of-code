//Write a program that accepts a percentage (0-100) and assigns a grade based on the given criteria.
#include <stdio.h>

int main()
{
    int p;

    printf("Enter percentage: ");
    scanf("%d", &p);

    if(p >= 90)
        printf("Grade A");

    else if(p >= 80)
        printf("Grade B");

    else if(p >= 70)
        printf("Grade C");

    else if(p >= 60)
        printf("Grade D");

    else
        printf("Grade F");

    return 0;
}