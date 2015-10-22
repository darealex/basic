/*
 Modify your program to read the number from the console. Use the scanf() function.
 */

#include <stdio.h>
#include <math.h> 

int main(void){
	double num;
	printf("Square: ");
	scanf("%lf", &num);
	double res;
	res = sqrt(num);
	printf("Display: %f\n", num);
	printf("Result: %f\n", res);
	return 0;
}
