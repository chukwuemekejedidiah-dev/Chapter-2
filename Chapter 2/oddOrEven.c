#include<stdio.h>
int oddOrEven(int number) {
    if (number % 2 == 0) {
        printf(" The number is even.\n");
    } else {
        printf(" The number is odd.\n");
        return 0; 
    }
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    oddOrEven(number);
    return 0;
}