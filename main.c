// BILL CHAKOR, THE TEXT BASED GAME
// Credits: JORGERAYMASON

#include <stdio.h>
#include "story.c"
#include "ASCII.c"

// Function prototype declarations

void saveGame(); // Function that saves the game

void loadGame(); // Function that loads the game

void exitGame(); // Exits the game when called

void introScene(); // Intro scene that starts the game

void chapter1ReptillianAuthority(); // Calls for the content of chapter one

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

    if (userInput == 'Q')
    {
        main();
    }
}

void saveGame()
{
    // Save currentLine value
}

// Loads game progress
void loadGame()
{
    // Retrieve saved index
    // currentLine = savedValue;
}

// Exits the game
void exitGame(){
    printf("Exiting Game...");
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

    /*
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
    */

   if (input == 1 || input == 2 || input == 3 || input == 4)
   {
    printf("You picked chapter: %d", input);
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

    int currentLine = 0;

    // Print story
    while(currentLine < 188) {
        printf("%s\n", chapter1_story_text[currentLine]);

        waitForInput();

        currentLine++;

        // Check for choice point
        if(currentLine == 9) {

        //char choices[] = {"Bill: That’s tragic, truly. Defying the creed was a major mistake on their end.", "Bill: Idiots! They should have never done that. I'ld laugh in their face", "Bill: Eh. Couldn't have been me.",};

        int choice = 0;
        char* opt1 = chapter1_story_text[10];
        char* opt2 = chapter1_story_text[11];
        char* opt3 = chapter1_story_text[12];

        printf("What do you say to Jason?\n1.%s\n2.%s\n3.%s", opt1, opt2, opt3);
        scanf("%d\n", &choice);
        
            if(choice == 1) { 
                currentLine = 13; // Branch storyline  
            }
            else if (choice == 2) {
                currentLine = 14; 
            }
            else if (choice == 3){
                currentLine = 15;
            }
            else{
                printf("Invalid input");
            }
        }
        else {

        // Print next line
        printf("%s\n", chapter1_story_text[currentLine]);
        currentLine++;
        }
    }

}

//2nd Chapter. Gambeler, no good uncle, Ricchi Ippatsu
void chapter2HighStakes(){

}

//3rd Chapter. The robotic and monotone, Takahashi.
void chapter3TechnicalDifficulties(){

}

// 4th Chapter. The legend of the etheral Kora Gray
void chapter4DivineSolance()
{
    // Story text split across lines in an array

    printf("**Chapter 4: Divine Solace**\n**********************************\n\n");

    printf("%s", asciiKora);

    int currentLine = 0;

    // Print story
    while(currentLine < 188) {
        printf("%s\n", chapter4_story_text[currentLine]);

        waitForInput();

        currentLine++;
    }
}
