/*
  Problem 7. Sort 3 Numbers with Nested Ifs
Write a program that enters 3 real numbers and prints them sorted in descending order. Use nested if statements.
Don’t use arrays and the built-in sorting functionality
 */
#include <stdio.h> 

int main() {

    int sizeNum = 3;
    int i;

    float bigNum = 0;
    float a, b, c, d, e;
    float num[6];
    float sortNum[6];

    for (i = 0; i < sizeNum; i++) {
        printf("Write num %d : ", i + 1);
        scanf("%f", &num[i]);
    }

    a = num[0];
    b = num[1];
    c = num[2];

    if (a > b) {
        sortNum[0] = a;
        if (b > c) {
            sortNum[1] = b;
            sortNum[2] = c;
        } else {
            sortNum[1] = c;
            sortNum[2] = b;
        }
    } else if (c > a && c > b) {
        sortNum[0] = c;
        if (b > a) {
            sortNum[1] = b;
            sortNum[2] = a;
        } else {
            sortNum[1] = a;
            sortNum[2] = b;
        }

    } else {
        sortNum[0] = b;
        if (c > a) {
            sortNum[1] = c;
            sortNum[2] = a;
        } else {
            sortNum[1] = a;
            sortNum[2] = c;
        }
    }

    for (i = 0; i < sizeNum; i++) {
        printf("| %5.1f  ", num[i]);
    }

    printf("|");

    for (i = 0; i < sizeNum; i++) {
        printf(" %5.1f  ", sortNum[i]);
    }


    return 0;
}
