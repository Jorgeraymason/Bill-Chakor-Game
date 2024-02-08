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

int makeChoice();

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
    
    printf("%s\n", asciiNewt);

    printf("You meet Newt Manson, the Supreme Zealot of the Roxford lodge\n\n");

    printf("Newt: Glory to me, myself, and I! Who's as good as me? Nobody! Also don't forget to vote me as Roxford Mayor. Exterminate the black germ!\n\n");

    printf("What do you say to Newt?\n\n");

    printf("1: Yeah right, arrogant man.\n2: I support you until the end, Manson!\n3.Luko Goodkid is better\n\n");

    int choice = makeChoice();

    if (choice == 1)
    {
        printf("\nNewt: You don't want to support the greatest man to ever live? Your loss.\n\n");

        printf("Bill(Inner Monolouge): Great is a racist who shoots innocent blacks? I'll pass!\n\n");
    }
    else if (choice == 2)
    {
        printf("Newt: Good! Someone with a brain! Way to come to your senses and recgonize my greatness.\n\n");

        printf("Bill(Inner Monolouge): Yeah! You're so great, Newt Manson! To be more like you! Minus the racist hate crimes\n\n");
    }
    else {
        printf("Newt: Luko? Over me? That Creed fanatic is a lunatic! You're nuts.\n\n");

        printf("Bill(Inner Monolouge): Aren't YOU a creed member?! And besisdes didn't you shoot someone?\n\n");
    }
    
    printf("Bill: Hey If I remember the news correctly, didn't you shoot someone?\n\n");

    printf("Newt: What? That girl trying to bomb the Lodge? No, my gaurds did that.\n\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("Is Newt Manson Lying?\n1. No, he's telling the truth\n2. Yes, something is off\n3. Newt Manson? Lying? NEVER!\n\n");

        int choice = makeChoice();

        if(choice == 1)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }
        else if(choice == 2)
        {
            printf("Correct!\n");  

            printf("Newt: Ugh, you win. Yeah it was me...\n");
            break;
        }
        else if(choice == 3)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }

        if(count == 2)
        {
            gameOver();
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
        gameOver();
    }
    
}

// 2nd Chapter, involves Ricchi Ippatsu
void chapter2HighStakes(){
    char input;
    
    printf("%s\n", asciiRicchi);

    printf("You meet your slimy uncle: Ricchi Ippatsu, the proprietor of the 7 Spades Casino.\n\n");

    printf("Ricchi: *puffs cigar* Eh? Is that you kiddo? I didn't know youse was gonna come out to see yer old Uncle Ricchi. Don't go thinkin' you're too good for me now. Tell me, how's Kris treatin' Pandora?\n\n");

    printf("What do you say to Ricchi?\n\n\n");

    printf("1: Yes Uncle Ricchi, everything is fine. How's the casino?\n2: I would always visit you, anytime! Say, we should play cards sometime at the casino.\n3. Save the nice guy act, I know you're a criminal. The rigged casino?\n\n");

    int choice = makeChoice();

    if (choice == 1)
    {
        printf("\nRicchi:It's going...great. Everthing is smooth as butta'\n\n");

        printf("Bill: Inner Monolouge: Yeah....scamming people and fighting Kris...!\n\n");
    }
    else if (choice == 2)
    {
        printf("Ricchi: I'm glad you'se come out to see an old cat like me. to bad Kris don't come too....\n\n");

        printf("Bill(Inner Monolouge): Yeah, because you always try to fight him!\n\n");
    }
    else {
        printf("Ricchi: Yer treadin' on some deep water, kid. You'll get cut up round' these parts taking me head on.\n\n");

        printf("Bill(Inner Monolouge):Nope! I don't want to get cut! I'm sorry! I'M SORRY!!!\n\n");
    }
    
    printf("Bill: So uh.....you're saying the casino isn't rigged?\n\n");

    printf("Ricchi: Course it ain't. I woudln't do that to ya. Yer my Newphew. Any other folks, I will.\n\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("Is Ricchi Ippatsu Lying about the casino?\n1. Yeah, the casino is running just fine\n2. No, something is off. It's rigged.\n3. He used to be bad, but he probably changed now\n");

        int choice = makeChoice();

        if(choice == 1)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }
        else if(choice == 2)
        {
            printf("Correct!\n");  

            printf("Ricchi: Whatever, I'm gulity. I ain't scared of prision, I been before.\n");
            break;
        }
        else if(choice == 3)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }

        if(count == 2)
        {
            gameOver();
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
        chapter3TechnicalDifficulties();
    }
    else
    {
        gameOver();
    }
}

// 3rd Chapter, about the aloof and roboic Takahashi.
void chapter3TechnicalDifficulties(){
    char input;
    
    printf("%s\n", asciiTakahashi);

    printf("You meet the mysterious and robotic proprietor of Electronics GRAND, Takahashi. Formely Known as Tobi Komane after the TenSen incident.\n\n");

    printf("Takahashi: Ah yes, another customer. I am Takahashi. My technological expertise can aid you, if you allow it.\n\n");

    printf("What do you say to Takahashi?\n\n");

    printf("1: You're...you're creepy. Your name is JUST Takahashi?\n2: Say, how did you get that TV on your head?\n3. Takahashi? More like Tobi Komane! I know what you've done. You're responsible for the TenSen incident.\n\n");

    int choice = makeChoice();

    if (choice == 1)
    {
        printf("\nTakahashi: I do not care for your insolent tone. And yes, just Takahashi.\n\n");

        printf("Bill(Inner Monolouge): Wow. This guys is unflappable. So Robotic..\n\n");
    }
    else if (choice == 2)
    {
        printf("\nTakahashi: It's a means of hiding my....former identity. A man who is dead to me.\n\n");

        printf("Bill(Inner Monolouge): Welp, it must be really uncomfortable sleeping with that thing on....\n\n");
    }
    else {
        printf("\nTakahashi: Hmphhh.....How would you know that's me?\n\n");

        printf("Bill(Inner Monolouge):I don't know, maybe because of JASON! He has a file on you, and former TenSen records?\n\n");
    }
    
    printf("Bill: Didn't your name make the news? I remember a guy with a name similar to yours was responsible for some IT incident at TenSen.\n\n");

    printf("Takahashi: Maybe. I will tell you if you can get the name right.\n\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("What is Takahashi's real name?\n1. Tobi Komane\n2. Terry Koyolae\n3. Terrance Newman\n\n");

        int choice = makeChoice();

        if(choice == 1)
        {
            printf("Correct!\n\n");  

            printf("Takahashi: Very Well. It is true, I, Tobi Komane am responsible for the TenSen incident.\n\n");
            break;
        }
        else if(choice == 2)
        {
            printf("Incorrect. Try again.\n\n");
            count++;
        }
        else if(choice == 3)
        {
            printf("Incorrect. Try again.\n\n");
            count++;
        }

        if(count == 2)
        {
            gameOver();
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
        chapter4DivineSolance();
    }
    else
    {
        gameOver();
    }
}

// 4th Chapter, the legendary and etheral Kora Gray.
void chapter4DivineSolance(){
    char input;
    
    printf("%s\n", asciiKora);

    printf("You meet the naive and etheral, Kora Gray. She really likes you.\n");

    printf("Kora: I am pleased to see you, Bill-San. Would you like to dine with me?\n");

    printf("What do you say to Kora?\n\n");

    printf("1: Wow...you're...heaven sent...It's like I'm talking to an angel. I don't see why I wouldn't.\n2: Those robes.. What are you? A Monk? I guess I can dine with you...\n3. Kora, I need More-a that glowing energy! Yeah I'll eat with you!\n");

    int choice = makeChoice();

    if (choice == 1)
    {
        printf("\nKora: Yay! I am so please to be with you! Let us chow!\n*Kora proceeds to devour 4 whole Woks of beef stew*");


        printf("Bill(Inner Monolouge): CUZ....WHAT. THIS GIRL JUST ATE 4 WHOLE BOWL OF STEW\n");
    }
    else if (choice == 2)
    {
        printf("\nKora: Yes, I am. I come from the Temple of Zon. We will feast together!\n");

        printf("Bill(Inner Monolouge): Welp, it must be really uncomfortable sleeping with that thing on....\n");
    }
    else {
        printf("\nKora: You can! If you just take on the ways on the Zonnism! You must first eat 12 bowls of Beef stew.\n");

        printf("Bill(Inner Monolouge):You mean to tell me my stomach has to explode before I can expirence divine peace? I'm good.\n");
    }
    
    printf("Bill: How did Zoey ever meet a girl like you?\n");

    printf("Kora: She stuck up for me back in acadmey, back when I was being bullied by Chelsey DeMarco, when she took my robes while I was showering. Speaking of which, can you bathe me, Bill?\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("Should you bathe Kora?\n1. No! She's a grown woman!\n2. Only if I'm getting paid\n3. I mean....that's what friends are for, right?\n");

        int choice = makeChoice();

        if(choice == 1)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }
        else if(choice == 2)
        {
            printf("Incorrect. Try again.\n");
            count++;
        }
        else if(choice == 3)
        {
            printf("Correct!\n");  

            printf("Kora: Thank you so much, Bill-San! I am delighted that you would do this for me!\n");

            printf("Bill(Inner monolouge): Yeah, NEVER AGAIN!\n");
            break;
        }

        if(count == 2)
        {
            gameOver();
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
       chapter5HeartOfStone();
    }
    else
    {
        gameOver();
    }
}

//5th Chapter, face the pious authoritian, Luko Goodkid
void chapter5HeartOfStone(){
    char input;
    
    printf("%s\n", asciiLuko);

    printf("You meet the Zealous and stone hearted, Luko Goodkid at the 1st Bridge of the Grand Lodge.\n\n");

    printf("Luko: Halt, civillian! You tread in Creed territory! You stand before the Grand Lodge!\n\n");

    printf("What do you say to Luko?\n\n\n");

    printf("1: Luko Goodkid! I mean, Officer Goodkid! My apologies! I will never again indulge in civllian malfeasance!.\n2: Wow, you're.....Zealous. Talk about an authoritarian extremeist! How many times you kiss Elder Graftons ass a day?\n3. Luko Goodkid! I'm honored. You're so much better than Newt Manson!\n\n");

    int choice = makeChoice();

    if (choice == 1)
    {
        printf("\nLuko: It is Officer Goodkid, to you. I Luko Goodkid am the 2nd Chairman of the Grand Lodge, Director of ADX Juno, and Supreme Zealot of the Kingpin Lodge\n\n");


        printf("Bill(Inner Monolouge): Wow, how long did it take you to get all of those titles?\n\n");
    }
    else if (choice == 2)
    {
        printf("\nLuko: You are insolent, civillian! May the creed prevail! You are ignorant of our glory!\n\n");

        printf("Bill(Inner Monolouge): Wait...NO! Jorges, Help!\n\n");
    }
    else {
        printf("\nLuko: I am aware of that. Zealot Manson is incompetent and a liability to out ranks.\n\n");

        printf("Bill(Inner Monolouge): This is why you're 2nd Chairman of the Grand Lodge!\n\n");
    }
    
    printf("Luko: Keep in mind, you are still are here without Creed authourization. Flee the premsis or you will be charged.\n\n");

    printf("Bill:Uhh...W H A T\n\n");

    int count = 0; 

    while(count <= 2)  
    {
        printf("Will you fight Luko?\n1. Yes. I can take him on.\n2. Only if I'm getting paid\n3. Nope! Jorges could though!\n\n");

        int choice = makeChoice();

        if(choice == 1)
        {
            printf("You got punched so hard, you feel over and stumbled.\n\n");
            count++;
        }
        else if(choice == 2)
        {
            printf("You get hit so hard, you get paralyzed.\n\n");
            gameOver();
        }
        else if(choice == 3)
        {
            printf("You ran away, and just barely escaped creed premesis.\n\n");  

            printf("Luko: The Elder will be please with this...Do not return to creed premesis unless PERMITTED.\n\n");

            printf("Bill: Noted! I'll never come back!\n\n");
            break;
        }

        if(count == 2)
        {
            gameOver();
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
       printf("The end for now!\n");
    }
    else
    {
        gameOver();
    }
}

void gameOver(){
    printf("D O  B E T T E R  N E X T  T I M E");
}

int makeChoice(){

    int choice;

    printf("What do you choose?\n");

    scanf("%d", &choice);

    return choice;
}