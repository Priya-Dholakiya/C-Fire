#include <stdio.h>

void addition() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 + num2);
}
void subtraction() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 - num2);
}
void multiplication() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result: %d\n", num1 * num2);
}
void division()
 {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num2 != 0) 
	{
        printf("Result: %d\n", num1 / num2);
    } else 
	{
        printf("Error: Division by zero!\n");
    }
}
void modulus() 
{
    int num1, num2;
    printf("Enter First Numbers: ");
    scanf("%d", &num1);
    printf("Enter Second Numbers: ");
    scanf("%d", &num2);
    if (num2 != 0) 
	{
        printf("Result: %d\n", num1 % num2);
    } else 
	{
        printf("Error: Division by zero!\n");
    }
}

int main()
 {
    int choice;

    while (1) {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
	   {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting...!\n");
                return 0;
            default:
                printf("Invalid choice...!!!\n");
        }
    }
}

