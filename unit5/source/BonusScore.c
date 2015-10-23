/*
  Write a program that applies bonus score to given score in the range [1…9] by the following rules:
 If the score is between 1 and 3, the program multiplies it by 10.
 If the score is between 4 and 6, the program multiplies it by 100.
 If the score is between 7 and 9, the program multiplies it by 1000.
 If the score is 0 or more than 9, the program prints “invalid score”.
 */
#include <stdio.h> 

int main() {

    int store, bonus;

    printf(" Store from (1 - 9): ");
    scanf("%d", &store);

    printf("|  store  | result        |\n");
    
    if (0 < store && store < 4) {
        printf("|%6d   |%-15d|\n", store, store * 10);
    } else if(3 < store && store < 7){
        printf("|%6d   |%-15d|\n", store, store * 100);
    } else if(6 < store && store < 10){ 
        printf("|%6d   |%-15d|\n", store, store * 1000);
    } else {
        printf("|%6d   |invalid store  |\n", store);
    }

    return 0;
}
