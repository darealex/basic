/*
 Modify your program to read a number n from the console and then finds the first n members from the sequence,
starting from 2. 
 */ 
#include <stdio.h> 

int main(void) {
    int arrNum[] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11}; 
    int i;
    for (i = 0; i < 2; i++) {
        if(i > 0){
            printf(", ");
        }
        printf(" %d", arrNum[i]);
    } 
    return 0;
}
