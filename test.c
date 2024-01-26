#include <stdio.h>

void chapter1();

int getChoice();

void printLine();

int main(){
    chapter1();

    return 0;
}

// Chapter 1 function
void chapter1() {

  // Main story text 
  char* story[] = {
    "It was a dark night.",
    "I entered the creepy house.",
    "I came to a dusty hallway.",
    "To the left was the kitchen.",
    "To the right was the bedroom."
  };

  int currentLine = 0;

  // Print story
  while(currentLine < 5) {

    // Check for choice point
    if(currentLine == 2) {
      int choice = getChoice();
      
      if(choice == 1) { 
        currentLine = 3; // Branch storyline  
      }
      else {
        currentLine = 4; 
      }
    }
    else {
      // Print next line
      printLine(story[currentLine]);
      currentLine++;
    }

  }

}

// Get user choice
int getChoice() {
  
  int choice;
  printf("Left or Right? ");
  scanf("%d", &choice);
  
  return choice;
  
}

// Print line 
void printLine(char* line) {

  printf("%s\n", line);

}