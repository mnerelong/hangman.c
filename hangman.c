// MM CC EP Hangman
// hgey yalllll r u guys gud
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int correct;
    int hp = 6;
    char word[] = "builds";  
    int length = strlen(word); // Charlie came up with the length variable!
    srand(time(NULL));
    char guess;
    int successone;
    int successtwo;
    int successthree;
    int successfour;
    int successfive;
    // Elias worked on

    /*if (hp <= 0)
    {
        printf(":( GAME OVER, YOU FAILED, LOSE, GIT GUD, RIP, L, BOO HOO ):\n");
    }
    else if (hp > 0)
        printf("YOU WIN!!!!!!!");}*/


        if (word == "builds"){
        printf("The word has Six letters");
        printf("Pick a Letter.");
        scanf("%c", &attempt_uno);
            if (attempt_uno = "b" || "u" || "i" || "l" || "d" || "s")
            successone = attempt_uno
    }
        if 


    // Charlie worked on
    while (int i = 0; i < length; i++) {
    if (word[i] == guess) {
        display[i] = guess; 
        correct = 1; 
    }
    i++;
}

if (!correct) { 
    wrong[wrongCount] = guess; 
    wrongCount++;
    attemptsLeft--;
    printf("That's wrong!\n");  
} else {
    printf("AYYY u got it\n"); 
    //success_one = 
}

if (strcmp(display, word) == 0) {
    printf("\nU win!!! The answer was: %s\n", word);
    return 0;
}

    printf("U lose!!! The word was: %s\n", word);       
return 0;

}
