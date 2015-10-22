/*   
Write a program that enters 5 numbers (given in a single line, separated by a space), calculates and prints their
sum.
 */
#define PRINT_FORMAT "|%-5.0f %-5.0f %-5.0f %-5.0f %-5.0f|%-10.2f|\t"
#define PRINT_FORMATA "|%-5.1f %-5.2f %-5.2f %-5.0f %-5.0f|%-10.2f|\t"

#include <stdio.h>  

int main() {
    float a, b, c, d, e;

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;

    printf(PRINT_FORMAT, a, b, c, d, e, a + b + c + d + e);

    a = 10; 

    printf(PRINT_FORMAT, a, a, a, a, a, a *5);

    a = 1.5;
    b = 3.14;
    c = 8.2;
    d = -1;
    e = 0;

    printf(PRINT_FORMATA, a, b, c, d, e, a + b + c + d + e);

    return 0;
}
