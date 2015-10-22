/*   
 Write a program that reads the radius r of a circle and prints its perimeter and area formatted with 2 digits after the
decimal point. Examples:
 */


#include <stdio.h>  

int main() {
    float pi = 3.14;
    float radius;
    float area, perimeter;
    printf("Radius: ");
    scanf("%f", &radius);
    //perimeter 
    // 2pi.r
    //area
    // pi.r.r
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("Result radius = %.2f = perimeter = %.2f area = %.2f \n", radius, perimeter, area);

    return 0;
}
