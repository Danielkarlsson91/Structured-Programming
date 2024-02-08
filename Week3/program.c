#include<stdio.h>

int main() {

    char stone = 'S';
    char scissor = 'C';
    char paperbag = 'P';

    char player1;
    char player2;



    printf("What do you choose, stone(S), scissor(C) or paperbag(P)?\n");
    scanf(" %c", &player1);

    printf("What do you choose, stone(S), scissor(C) or paperbag(P)?\n");
    scanf(" %c", &player2);
    
 
    if ((player1 == 'S' && player2 == 'C') || 
        (player1 == 'C' && player2 == 'P') || 
        (player1 == 'P' && player2 == 'S')) {
        printf("%c %c\n", player1, player2);
        printf("Player 1 wins!\n");
    }
    else if ((player1 == 'C' && player2 == 'S') || 
             (player1 == 'P' && player2 == 'C') || 
             (player1 == 'S' && player2 == 'P')) {
        printf("%c %c\n", player1, player2);
        printf("Player 2 wins!\n");
    }
    else if (player1 == player2) {
        printf("%c %c\n", player1, player2);
        printf("It's a draw!\n");
    }
    else {
        printf("Invalid input. Please choose 'S', 'C', or 'P'.\n");
    }

    printf("Thank you for playing!\n");

    
     return 0;
    }
