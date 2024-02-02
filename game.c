// function prints the story text
void printStory(char** storyText, int** storyTextSize){
    
    for(int i = 0; i < storyTextSize; i++){ 
        printf("%s\n", storyText[i]);
    }
}

// Function for the 1st chapter
void chapter1ReptillainAuthority(){
    printf("%s", asciiNewt);

    printStory(chapter1StoryText, chapter1StoryTextSize);
}
