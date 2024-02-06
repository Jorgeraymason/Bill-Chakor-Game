// BILL CHAKOR, THE TEXT BASED GAME
// Credits: JORGERAYMASON

// All library declartions
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Inclue addtional Files 
#include "story.c"
#include "ASCII.c"

// Function prototype declarations
int mainMenu();

void introScene();

void chapter1ReptillainAuthority();

void chapter2HighStakes();

void chapter3TechnicalDifficulties();

void chapter4DivineSolance();


// Main function, contains the main menu
int main()
{
    mainMenu();

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
    
    scanf("%d", &input);

   switch(input)
   {
   case 1:
    chapter1ReptillainAuthority();
    break;
   default:
    introScene();
    break;
   }

    return input;
}

// For the intro Scene 
void introScene(){
    printf("In the beginning, Bill Chakor is hired by Tensen Law firm in Roxford.\nHe relocated to Roxford because of his newfound work.\nA taxi drops him off in front of the Roxford Hotel.\n");
}

// Function for the 1st chapter
void chapter1ReptillainAuthority(){
    char input;
    
    printf("%s\n", asciiNewt);

    printf("You meet Newt Manson, the Supreme Zealot of the Roxford lodge\n");

    printf("Go to next chapter? Y || N:\n");

    scanf(" %c", &input);

    while(input != 'Y' && input != 'N' && input != 'y' &&  input != 'n')	
	{
		printf("That is not a legal choice\nPlease enter Y or N...\n");
		scanf(" %c", &input);
	}

    if (input == 'Y' || input == 'y')
    {
        chapter2HighStakes();
    }
    else
    {
        introScene();
    }
    
}

// 2nd Chapter, involves Ricchi Ippatsu
void chapter2HighStakes(){
    char input;
    
    printf("%s\n", asciiRicchi);

    printf("You meet your slimy uncle: Ricchi Ippatsu, the proprietor of the 7 Spades Casino.\n");

    printf("Go to next chapter? Y || N:\n");

    scanf(" %c", &input);

    while(input != 'Y' && input != 'N' && input != 'y' &&  input != 'n')	
	{
		printf("That is not a legal choice\nPlease enter Y or N...\n");
		scanf(" %c", &input);
	}
	
    if (input == 'Y' || input == 'y')
    {
        chapter3TechnicalDifficulties();
    }
    else
    {
        introScene();
    }
}

// 3rd Chapter, about the aloof and roboic Takahashi.
void chapter3TechnicalDifficulties(){
    char input;
    
    printf("%s\n", asciiTakahashi);

    printf("Meet the mysterious and robotic proprietor of Electronics GRAND, Takahashi. Formely Known as Tobi Komane after the TenSen incident.\n");

    printf("Go to next chapter? Y || N:\n");

    scanf(" %c", &input);

        while(input != 'Y' && input != 'N' && input != 'y' &&  input != 'n')	
	{
		printf("That is not a legal choice\nPlease enter Y or N...\n");
		scanf(" %c", &input);
	}

    if (input == 'Y' || input == 'y')
    {
        chapter4DivineSolance();
    }
    else
    {
        introScene();
    }
}

// 4th Chapter, the legendary and etheral Kora Gray.
void chapter4DivineSolance(){
    char input;
    
    printf("%s\n", asciiKora);

    printf("The guileless and etheral, Kora Gray. She really likes you and has a crush on you but she's odd.\n");

    printf("Go to next chapter? Y || N:\n");

    scanf(" %c", &input);

    while(input != 'Y' && input != 'N' && input != 'y' &&  input != 'n')	
	{
		printf("That is not a legal choice\nPlease enter Y or N...\n");
		scanf(" %c", &input);
	}

    if (input == 'Y' || input == 'y')
    {
       printf("The end for now!\n");
    }
    else
    {
        introScene();
    }
}
