/*
 Write an if-statement that takes two integer variables a and b and exchanges their values if the first one is greater
than the second one. As a result print the values a and b, separated by a space. Examples:
 */
#include <stdio.h> 

int main() {

    float a, b;
    printf(" Write they bith digit (a and b): ");
    scanf("%f %f", &a, &b);
    if (a > b) {
        printf("True %5.1f %5.1f\n", b, a);
    } else {
        printf("False %5.1f %5.1f \n", a, b);
    }

    return 0;
}
