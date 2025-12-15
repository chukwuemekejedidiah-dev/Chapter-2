#include <stdio.h>

int circleProperties(float radius, float *circumference, float *area) {
    const float PI = 3.14159;
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
    return 0;
}

int main() {
    float radius;
    float circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circleProperties(radius, &circumference, &area);

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}