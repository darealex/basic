/*  
 Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using
some programming logic. Print the variable values before and after the exchange.
 */


#include <stdio.h>  

int main() { 
    char a = 5;
    char b = 10;
    printf("Before \n a = %d \n b = %d \n", a, b);
    a = 10;
    b = 5;
    printf("After \n a = %d \n b = %d", a, b);
    return 0;
}
