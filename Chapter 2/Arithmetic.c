#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    printf("Addition: %d + %d = %d\n", number1, number2, number1 + number2);
    printf("Subtraction: %d - %d = %d\n", number1, number2, number1 - number2);
    printf("Multiplication: %d * %d = %d\n", number1, number2, number1 * number2);
    if (number2 != 0) {
        printf("Quotient: %d / %d = %.2f\n", number1, number2, (float)number1 / number2);
        printf("Remainder: %d %% %d = %d\n", number1, number2, number1 % number2);
    } else {
        printf("Division and Remainder by zero is not allowed.\n");
    }

    return 0;
}