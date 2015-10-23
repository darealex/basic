/*
  Write a program that finds the biggest of three numbers
 */
#include <stdio.h> 

int main() {

    float a, b, c;


    printf("Write a: ");
    scanf("%f", &a);

    printf("Write b: ");
    scanf("%f", &b);

    printf("Write c: ");
    scanf("%f", &c);


    if (a > b) {
        if (a > c) {
            printf("|%5.1f|%5.1f|%5.1f|%10.1f\n", a, b, c, a);
        } else {
            printf("|%5.1f|%5.1f|%5.1f|%10.1f\n", a, b, c, c);
        }
    } else {
        if (b > c) {
            printf("|%5.1f|%5.1f|%5.1f|%10.1f\n", a, b, c, b);
        } else {
            printf("|%5.1f|%5.1f|%5.1f|%10.1f\n", a, b, c, c);
        }
    }


    return 0;
}
