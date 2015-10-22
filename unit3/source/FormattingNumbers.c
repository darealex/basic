/*   
Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500), a floating-point b and a floating-point c and prints
them in 4 virtual columns on the console. Each column should have a width of 10 characters. The number a should
be printed in hexadecimal, left aligned; then the number a should be printed in binary form, padded with zeroes,
then the number b should be printed with 2 digits after the decimal point, right aligned; the number c should be
printed with 3 digits after the decimal point, left aligned. Examples:
 */
#define PRINT_FORMAT "|%-10d|%-10.1f|%-10.1f|%-10X|%-8s|%10.1f|%-10.3f|\n"

#include <stdio.h>  

int MyConvertBaseDigit(long digitsInput, int base, char *result) {
    char baseDigits[17] = {'0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int convertedNumber[64];
    int nextDigit, index = 0;
    while (digitsInput != 0) {
        convertedNumber[index] = digitsInput % base;
        digitsInput = digitsInput / base;
        ++index;
    }
    char i = 0;
    --index;
    for (; index >= 0; index--) {
        result[i] = baseDigits[convertedNumber[index]];
        ++i;
    }
    result[i] = '\0';
    return 0;
}

int main() {
    unsigned short a;
    float b, c;
    char binary[64];
    
    a = 254;
    b = 11.6;
    c = 0.5;
    MyConvertBaseDigit(a, 2, binary);
    printf(PRINT_FORMAT, a, b, c, a, binary, b, c);
    
    a = 499;
    b = -0.5559;
    c = 1000;
    MyConvertBaseDigit(a, 2, binary);
    printf(PRINT_FORMAT, a, b, c, a, binary, b, c);
    
    a = 0;
    b = 3;
    c = -0.1234;
    MyConvertBaseDigit(a, 2, binary);
    printf(PRINT_FORMAT, a, b, c, a, binary, b, c);  
    
    return 0;
}
