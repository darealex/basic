/*   
 Write a program that safely compares floating-point numbers (double) with precision eps = 0.000001. Note that
we cannot directly compare two floating-point numbers a and b by a==b because of the nature of the floating-point
arithmetic. Therefore, we assume two numbers are equal if they are more closely to each other than a fixed
constant eps. Examples:
 */


#include <stdio.h>  

int ResultTorF(double a, double b) {
    double c = (a - b);
    if(c < 0 ){
        c *=-1;
    }
    if (c < 0.000001) {
        printf(" %lf = %lf = true \n", a, b);
    } else {
        printf(" %lf = %lf = false \n", a, b);
    }
    return 0;
}

int main() {
    ResultTorF(5.3, 6.01);
    ResultTorF(5.00000001, 5.00000003);
    ResultTorF(5.00000005, 5.00000001   );
    ResultTorF(-0.0000007, 0.00000007   );
    ResultTorF(-4.999999, -4.999998   );
    ResultTorF(4.999999, 4.999998    

    return 0;
}
