/*
  Problem 6. The Biggest of Five Numbers
Write a program that finds the biggest of five numbers by using only five if statements. Examples:
 */
#include <stdio.h> 

int main() {

    int sizeNum = 5;
    int i;

    float bigNum = 0;
    float a, b, c, d, e;
    float num[6];

    for (i = 0; i < sizeNum; i++) {
        printf("Write num %d : ", i + 1);
        scanf("%f", &num[i]);
    }

    for (i = 0; i < sizeNum; i++) {
        bigNum = (bigNum > num[i]) ? bigNum : num[i];
        printf("| %5.1f  |", num[i]);
    }
    printf("|   %-5.1f  |", bigNum);


    return 0;
}
