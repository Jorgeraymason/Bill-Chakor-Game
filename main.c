// BILL CHAKOR, THE TEXT BASED GAME
// Credits: JORGERAYMASON

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "story.c"
#include "ASCII.c"

// Function prototype declarations

void exitGame();

void chapterSelect();

int makeChoice(); 

void waitForInput();

void introScene();

void chapter1ReptillianAuthority();

void chapter2HighStakes();

void chapter3TechnicalDifficulties();

void chapter4DivineSolance();


// Main function, contains the main menu
int main()
{
    // Input variable for user input
    int input; 

    // Prints the logo of ASCII Bill
    printf("%s\n\n", asciiBill);

    // Main menu text
    printf("|*************|\nBill Chakor\n|*************|\nStart Game[1]\n|*************|\nLoad Game [2]\n|*************|\nChapter Select [3]\n||*************|\nExit Game[4]\n");

    // Prompts user for input
    scanf("%d", &input);

    // Switch case based on user input
    switch(input)
    {
    case 1:
        chapter1ReptillianAuthority();
        break;
    case 2:
        printf("Nothing here yet");
        break;
    case 3:
        chapterSelect();
        break;
    case 4:
        exitGame();
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}

// Waits for user input each time to read next line.
void waitForInput()
{
    printf("\n\nPress Enter to continue...\n\n");

    char userInput = getchar();

    if (userInput == 'Q'|| userInput == 'q')
    {
        main();
    }
}

// Called every time user has to make a choice for a decistion in the story.
int makeChoice(){
    int option = 0;

    printf("What do you choose?");
    scanf("%d", &option);
    
    return option;
}

// Exits the game
void exitGame(){
    printf("Exiting Game...");
    exit(0);
}

// Allows user to select chapter to start from, or revisit
void chapterSelect(){
    int input;

    printf("Which chapter would you like ot visit? (Enter chapter number):\n");

    printf("Chapter 1: Reptillian Authority\n%s\n\n", asciiNewt);
    printf("Chapter 2: High Stakes\n%s\n\n", asciiRicchi);
    printf("Chapter 3: Technical Difficulties\n\n%s\n\n", asciiTakahashi);
    printf("Chapter 4: Divine Solace\n\n%s\n\n", asciiKora);

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        chapter1ReptillianAuthority();
        break;
    case 2:
        chapter2HighStakes();
        break;
    case 3:
        chapter3TechnicalDifficulties();
        break;
    case 4:
        chapter4DivineSolance();
        break;
    default:
        break;
    }
}

//Intro scene that starts game.
void introScene()
{ 
    // Print the intro scene text
    char text[] = "\nIn the beginning, Bill Chakor is hired by Tensen Law firm in Roxford. He relocated to Roxford because of his newfound work. A taxi drops him off in front of the Roxford Hotel.\nBill steps out of the car and thinks to himself:\nBill: Is this the place? I guess so. Looks like Ill be staying here until I can see Jason tomorrow.\nBill walks into the hotel, where he is then greeted by the clerk at the front desk.\nHotel Clerk: Welcome, You must be Bill! You had a reservation. Tensen told me about your arrival. You are on the 11th floor, 7th room. All expenses covered. Enjoy your stay.";

    printf("%s", text);

    waitForInput();

    printf("Bill nods and thanks the clerk. He heads to his room and gets settled in. He immediately checks his laptop and cell phone for any updates from Tensen.\nHe has one unread message from Tensen that reads: Welcome to Roxford, Bill.\nWe covered your hotel expenses as discussed. That’s just one of the benefits for working at our firm. I’ll see you tomorrow. - Jason'' \nBill closes his laptop and goes to sleep for the night.");

    waitForInput();

    printf("The next day, Bill goes out to meet with Jason at Tensen.");

    waitForInput();

    printf("Bill: (Going in for a handshake, enthusiastic) Jason! It’s been some time. New place, new office, same problems. Just like old times, huh?");

    waitForInput();

    printf("Jason: (Shakes hands, grinning) Ah, Bill. I’m so forever thankful the day Kris told me about you. But yeah like you said, new place, same problems");

    waitForInput();

    printf("Bill: Yeah. Kris would’ve been an….. asset about now. Anyways, tell me. What’s this case that came up on the news?\nThe two glance over at the TV, as the news comes on and explains the tragic scenario.");
    
    chapter1ReptillianAuthority();
}

// 1st chapter of the game. The slimy racist and narcissist, Newt Manson.
void chapter1ReptillianAuthority()
{
    // Story text split across lines in an array
    
    //char *chapter1Characters[] = {"Zoey", "Bill", "Jason", "Newt", "LaShawnya"};

    printf("**Chapter 1: Reptiallian Authority**\n**********************************\n");

    printf("%s", asciiNewt);

    int textSize =  sizeof(chapter1StoryText) / sizeof(chapter1StoryText[0]);

    for (int i = 0; i <= textSize; i++)
    {
        printf("%s", chapter1StoryText[i]);

        waitForInput();

        i++;
    
        if (i == 10)
        {
            int choice = 0;

            printf("1.%s\n2.%s\n3. %s", chapter1StoryText[9], chapter1StoryText[10], chapter1StoryText[11]);

            scanf("%d", &choice);

            if (choice == 1)
            {
                i = 13;
                //printf("%s", chapter1StoryText[i]);
                break;
            }
            else if (choice == 2)
            {
                i = 14;
                //printf("%s", chapter1StoryText[i]);
                break;
            }
            else if (choice == 3)
            {
                i = 15;
                //printf("%s", chapter1StoryText[i]);
                break;
            }
        }
        else
        {
            printf("%s", chapter1StoryText[i]);

            waitForInput();

            i++;
        }
    }
}

void chapter2HighStakes() {
   // Code
   printf("Hi");
}

void chapter3TechnicalDifficulties() {
   // Code
   printf("Hi");
}

void chapter4DivineSolance() {
    printf("Hi");
}
