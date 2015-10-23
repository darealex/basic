/*
 Problem 8. Digit as Word
Write a program that asks for a digit (0-9), and depending on the input, shows the digit as a word (in English). Print
“not a digit” in case of invalid inut. Use a switch statemen
 */
#include <stdio.h> 

int main() {

    int digit;

    printf("Write digit: (0-9)");
    scanf("%d", &digit);

    switch (digit) {
        case 0:
            printf("| %5d     | zero  |\n", digit);
            break;
        case 1:
            printf("| %5d     | one  |\n", digit);
            break;
        case 2:
            printf("| %5d     | two  |\n", digit);
            break;
        case 3:
            printf("| %5d     | three  |\n", digit);
            break;
        case 4:
            printf("| %5d     | four  |\n", digit);
            break;
        case 5:
            printf("| %5d     | five  |\n", digit);
            break;
        case 6:
            printf("| %5d     | six  |\n", digit);
            break;
        case 7:
            printf("| %5d     | seven  |\n", digit);
            break;
        case 8:
            printf("| %5d     | eight  |\n", digit);
            break;
        case 9:
            printf("| %5d     | nine  |\n", digit);
            break;
        default:
            printf("| %5d     | not a digit  |\n", digit);
            break;
    }

    return 0;
}
