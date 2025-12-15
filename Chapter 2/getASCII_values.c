#include <stdio.h>
int getASCIIValue(char character) {
    return (int)character;
}
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    int asciiValue = getASCIIValue(character);
    printf("The ASCII value of '%c' is: %d\n", character, asciiValue);
    return 0;
}