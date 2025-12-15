#include <stdio.h>
 int isMultiple(int num1, int num2) {
    if (num2 == 0) return 0; // Avoid division by zero
    return num1 % num2 == 0;
}

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (isMultiple(a, b)) {
        printf("%d is a multiple of %d\n", a, b);
    } else {
        printf("%d is NOT a multiple of %d\n", a, b);
    }

    return 0;
}