/*   
Write a program that reads a number n and prints on the console the first n members of the Fibonacci sequence (at
a single line, separated by spaces) : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, …. Note that you may need to learn
how to use loops
 */

#include <stdio.h>  

int main() {
    int forn[64];
    int sumn = 0;
    unsigned char n, i;
    printf("n = ");
    scanf("%d", &n);

    printf("|%-10d|", n);
    for (i = 0; i <= n; i++) {
        if (i == 0) {
            forn[i] = 0;
        } else if(i == 1){
            forn[i] = 1;
        } else {
            forn[i] = forn[i-2]+forn[i-1];
        }
        printf("%d\t", forn[i]);
    } 
    return 0;
}
