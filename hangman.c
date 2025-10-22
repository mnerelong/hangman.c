// MM CC EP Hangman
// hgey yalllll r u guys gud
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    int hp = 6;
    char word[10];
    srand(time(NULL));
    int attempt_uno;
    int attempt_dos;
    int attempt_tres;
    int attempt_quatro;
    int attempt_sinco;
    int attempt_seis;

    int random = rand() %10 +1;
    if (random == 1){
        char* word = "build";
    } else if (random == 2) {
        char* word = "lovely";
    } else if (random == 3) {
        char* word = "game";
    } else if (random == 4) {
        char* word = "first";
    } else {
        char* word = "five";
    }

    printf("%s\n", word);

    char user_vari;
    char chosen_word();
    
        // Elias worked on
    if (hp <= 0)
    {
        printf(":( GAME OVER, YOU FAILED, LOSE, GIT GUD, RIP, L, BOO HOO ):\n");
    }
    else
    {
        printf("\n");
    }

    if ()
    {
        printf(":( GAME OVER, YOU FAILED, LOSE, GIT GUD, RIP, L, BOO HOO ):\n");
    }
    else
    {
        printf("\n");
    }


// Charlie worked on

}
    if(guessedalready){
    Guessedletters[numguessed++] = guess;
    printf("u got it wrong. Try again: ");
    for (int i = 0; i < numguessed; i++){
	printf("%c", guesssedletters[i]);
}
        printf("\n");
}   else if {
	    printf("u alr guessed that letter\n");
}
}   else {
        printf("thats correct!!!\n");
}
    return 0;
}
