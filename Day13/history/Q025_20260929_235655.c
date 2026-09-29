#include <stdio.h>

int main(void)
{
    double number1, number2;
    char operation;

    printf("Enter an expression (number operator number): ");
    if (scanf("%lf %c %lf", &number1, &operation, &number2) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operation) {
        case '+':
            printf("Result: %g\n", number1 + number2);
            break;
        case '-':
            printf("Result: %g\n", number1 - number2);
            break;
        case '*':
            printf("Result: %g\n", number1 * number2);
            break;
        case '/':
            if (number2 == 0) {
                printf("Error: division by zero.\n");
                return 1;
            }
            printf("Result: %g\n", number1 / number2);
            break;
        case '%':
            if (number2 == 0) {
                printf("Error: modulo by zero.\n");
                return 1;
            }
            printf("Result: %lld\n", (long long)number1 % (long long)number2);
            break;
        default:
            printf("Unsupported operator. Use +, -, *, /, or %%.\n");
            return 1;
    }

    return 0;
}