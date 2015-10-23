/*
  Write a program that shows the sign (+, - or 0) of the product of three real numbers, without calculating it. Use a
sequence of if operators. E
 */
#include <stdio.h> 

int main() {

    float a, b, c;
    int fa, fb, fc;

    printf("Write a: ");
    scanf("%f", &a);
    fa = (a > 0) ? 1 : -1;

    printf("Write b: ");
    scanf("%f", &b);
    fb = (b > 0) ? 1 : -1;

    printf("Write c: ");
    scanf("%f", &c);
    fc = (c > 0) ? 1 : -1;

    if (!a || !b || !c) {
        printf("|%4.1f  |%4.1f, |%4.1f  |  0  \n", a, b, c);
    } else {
        if ((fa * fb * fc) > 0) {

            printf("|%4.1f  |%4.1f, |%4.1f  |  +  \n", a, b, c);
        } else {

            printf("|%4.1f  |%4.1f, |%4.1f  |  -  \n", a, b, c);
        }
    }



    return 0;
}
