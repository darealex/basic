/*
 Write a program that prints the first 10 members of the sequence: 2, -3, 4, -5, 6, -7, ...
 */ 
#include <stdio.h> 

int main(void) {
    int arrNum[] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11};
    //int countArr = sizeof(arrNum)/sizeof(int);
    int countArr = sizeof(arrNum)/sizeof(arrNum[0]); 
    int i;
    for (i = 0; i < countArr; i++) {
        if(i > 0){
            printf(", ");
        }
        printf(" %d", arrNum[i]);
    } 
    return 0;
}
