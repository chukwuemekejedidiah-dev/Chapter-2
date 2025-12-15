
#include<stdio.h>   
int square(int number) {
    return number * number;
}


int cube(int number) {
    return number * number * number;
}

int main() {
    int number, i;

    printf("Number\tSquare\tCube\n");

    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, square(i), cube(i));
    }

    return 0;
}

