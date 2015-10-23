/*
Problem 12.** Zero Subset
We are given 5 integer numbers. Write a program that finds all subsets of these numbers whose sum is 0. Assume
that repeating the same subset several times is not a problem. 
 */
#include <stdio.h> 

int main() {

    int i, k;
    int sizeNum = 5;
    int num[6];
    int result[64][10];

    for (i = 0; i < sizeNum; i++) {
        printf("Write num %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    if (!num[0] && !num[1] && !num[2] && !num[3] && !num[4]) {
        //all = 0
    } else if (num[0] > 0 && num[1] > 0 && num[2] > 0 && num[3] > 0 && num[4] > 0) {
        //all +
    } else if (num[0] < 0 && num[1] < 0 && num[2] < 0 && num[3] < 0 && num[4] < 0) {
        //all -
    }

    for (i = 0; i < sizeNum; i++) {
        //result[i][0] = num[i];
        for (k = 0; k < sizeNum; k++) {
            if (i == k) continue;
            //result[i][k];
        }
    }

    return 0;
}
