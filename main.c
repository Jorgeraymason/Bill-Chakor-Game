// BILL CHAKOR, THE TEXT BASED GAME
// Credits: JORGERAYMASON

// All library declartions
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Inclue addtional Files 
#include "story.c"
#include "game.c"
#include "ASCII.c"

// Function prototype declarations
int mainMenu();

void chapter1ReptillainAuthority();

// Main function, contains the main menu
int main()
{
    mainMenu();

    switch(mainMenu())
    {
    case 1:
        printf("Welcome to the game!\n\n");
        chapter1ReptillainAuthority();
        break;
    default:
        printf("Not cool");
        break;
    }

    return 0;
}

// Prints the Main Menu. NOT THE SAME AS MAIN. 
int mainMenu(){

    // Prints the logo of ASCII Bill
    printf("%s\n\n", asciiBill);

    // Main menu text
    printf("|*************|\nBill Chakor\n|*************|\nStart Game[1]\n");

    // Input variable for user input
    int input;

    // Prompts user for input
    scanf("%d\n", &input);

    return input;
}
