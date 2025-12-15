#include <stdio.h>

// Function to separate and print digits with three spaces
void printDigits(int number) {
    int d1 = number / 10000;
    int d2 = (number / 1000) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 10) % 10;
    int d5 = number % 10;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
}

int main() {
    int num;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Invalid input. Must be a five-digit number.\n");
    } else {
        printDigits(num);
    }
    return 0;
}
