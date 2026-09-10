//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("%d", a + b);
            break;

        case 2:
            printf("%d", a - b);
            break;

        case 3:
            printf("%d", a * b);
            break;

        case 4:
            printf("%d", a / b);
            break;

        case 5:
            printf("%d", a % b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}