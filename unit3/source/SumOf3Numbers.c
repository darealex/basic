/*   
 Write a program that reads 3 real numbers from the console and prints their sum. Examples:
 */


#include <stdio.h>  
 
int main() { 
    int a, b, c;
    float sun;
    a = 3, b = 4, c = 11;
    sun = a + b + c;
    printf("%d + %d + %d = %.2f \n", a, b, c, sun);
    
    a = -2, b = 0, c = 3;
    sun = a + b + c;
    printf("%d + %d + %d = %.2f \n", a, b, c, sun);
    
    float aa = 5.5f, bb = 4.5f, cc = 20.1f;
    sun = aa + bb + cc;
    printf("%.1f + %.1f + %.1f = %.2f \n", aa, bb, cc, sun);

    return 0;
}
