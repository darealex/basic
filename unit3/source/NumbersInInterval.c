/*   
Write a program that reads two positive integer numbers and prints how many numbers p exist between them such
that the reminder of the division by 5 is 0. Examples:
 */

#include <stdio.h>   

int main() {
    int forn[64];
    int sumn = 0;
    unsigned char start, end, i, key;
    printf("start and end ");
    scanf("%d %d", &start, &end);

    key = 0;
    for (i = start; i <= end; i++) {
        if (i % 5 == 0) {
            forn[key] = i;
            key++;
        }
    }  
    
    printf("|%-10d|%-10d|%-10d|", start, end, key); 
    for(i = 0; i<key; i++){
        if(i ==0){
            printf("%d", forn[i]);
        } else {
            printf(", %d", forn[i]);
            
        }
    }
    return 0;
}
