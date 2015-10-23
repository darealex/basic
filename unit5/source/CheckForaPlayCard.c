/*
  Classical play cards use the following signs to designate the card face: 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A. Write a
program that enters a string and prints “yes” if it is a valid card sign or “no” otherwise. Examples:
 */
#include <stdio.h> 

int main() {

    char card;

    printf(" check char for card: ");
    scanf("%c", &card);

    printf("|  character  | valid card sign? |\n");

    //2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A 
    switch (card) {
        case '2':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '3':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '4':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '5':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '6':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '7':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '8':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '9':
            printf("|%10c   |       yes        |\n", card);
            break;
        case '10':
            printf("|%10c   |       yes        |\n", card);
            break;
        case 'J':
            printf("|%10c   |       yes        |\n", card);
            break;
        case 'Q':
            printf("|%10c   |       yes        |\n", card);
            break;
        case 'K':
            printf("|%10c   |       yes        |\n", card);
            break;
        case 'A':
            printf("|%10c   |       yes        |\n", card);
            break;
        default:
            printf("|%10c   |       no         |\n", card);
            break;
    }

    return 0;
}
