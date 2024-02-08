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

void gameOver();

int makeChoice(int choice);

void introScene();

void chapter1ReptillainAuthority();

void chapter2HighStakes();

void chapter3TechnicalDifficulties();

void chapter4DivineSolance();

void chapter5HeartOfStone();


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

    int choice;
    
    printf("%s\n", asciiNewt);

    printf("You meet Newt Manson, the Supreme Zealot of the Roxford lodge\n");

    printf("Newt: Glory to me, myself, and I! Who's as good as me? Nobody! Also don't forget to vote me as Roxford Mayor. Exterminate the black germ!\n\n");

    printf("What do you say to Newt?\n\n");

    printf("1: Yeah right, arrogant man.\n2: I support you until the , Manson!\n3. Uh.....I'll pass\n4.Luko Goodkid is better\n");

    scanf(" %d", &choice);

    if (choice == 1)
    {
        printf("\nNewt: You don't want to support the greatest man to ever live? Your loss.\n");

        printf("Bill: Inner Monolouge: Great is a racist who shoots innocent blacks? I'll pass!\n");
    }
    else if (choice == 2)
    {
        printf("Good! Someone with a brain! Way to come to your senses and recgonize my greatness.\n");

        printf("Bill(Inner Monolouge): Yeah! You're so great, Newt Manson! To be more like you! Minus the racist hate crimes\n");
    }
    else {
        printf("Newt: Luko? Over me? That Creed fanatic is a lunatic! You're nuts.\n");

        printf("Bill(Inner Monolouge): Aren't YOU a creed member?! And besisdes didn't you shoot someone?\n");
    }
    
    printf("Bill: Hey If I remember the news correctly, didn't you shoot someone?\n");

    printf("Newt: What? That girl trying to bomb the Lodge? No, my gaurds did that.\n");

    //printf("\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("Is Newt Manson Lying?\n1. No, he's telling the truth\n2. Yes, something is off\n3. Newt Manson? Lying? NEVER!\n");

        scanf(" %d\n", &choice);

        if(choice == 1)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }
        else if(choice == 2)
        {
            printf("Correct!\n");  

            printf("Newt: Ugh, you win. Yeah it was me...");
            break;
        }
        else if(choice == 3)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }

        if(count == 2)
        {
            introScene();
            exit(0);
        }
    }
    
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

    printf("Ricchi: *puffs cigar* Eh? Is that you kiddo? I didn't know youse was gonna come out to see yer old Uncle Ricchi. Don't go thinkin' you're too good for me now. Tell me, how's Kris treatin' Pandora?\n");

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

    printf("You meet the mysterious and robotic proprietor of Electronics GRAND, Takahashi. Formely Known as Tobi Komane after the TenSen incident.\n");

    printf("Takahashi: Ah yes, another customer. What are you looking for? A GPU? CPU? More RAM? My technological expertise can aid you, if you allow it.\n");

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

    printf("You meet the guileless and etheral, Kora Gray. She really likes you and has a crush on you but she's odd.\n");

    printf("Kora: I am pleased to see you, Bill-San. Would you like to meditate with me?\n");

    printf("Go to next chapter? Y || N:\n");

    scanf(" %c", &input);

    while(input != 'Y' && input != 'N' && input != 'y' &&  input != 'n')	
	{
		printf("That is not a legal choice\nPlease enter Y or N...\n");
		scanf(" %c", &input);
	}

    if (input == 'Y' || input == 'y')
    {
       chapter5HeartOfStone();
    }
    else
    {
        introScene();
    }
}

//5th Chapter, face the pious authoritian, Luko Goodkid
void chapter5HeartOfStone(){
    char input;
    
    printf("%s\n", asciiLuko);

    printf("You meet the Zealous and stone hearted, Luko Goodkid.\n");

    printf("Luko: Halt, civillian! State your buisness for being in Creed territory! You stand before the Grand Lodge!\n");

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

void gameOver(){
    printf("D O  B E T T E R  N E X T  T I M E");
}

int makeChoice(int choice){
    printf("What do you choose?");

    scanf("%d", &choice);

    return choice;
}
