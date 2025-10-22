// MM CC EP Hangman
// hgey yalllll r u guys gud
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int hp = 6;
    char word[10];
    srand(time(NULL));
    int attempt_uno;
    int attempt_dos;
    int attempt_tres;
    int attempt_quatro;
    int attempt_sinco;

    // Meika did the "element of randomness".
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
    
        // Elias worked on
        
    
        if (hp <= 0)
    {
        printf(":( GAME OVER, YOU FAILED, LOSE, GIT GUD, RIP, L, BOO HOO ):\n");
    }
    else if (hp > 0)
        printf("YOU WIN!!!!!!!");
    


// Charlie worked on
    char letters[] =  {};   	int guessed =0;
	char word[] = "build";
	int length = strlen(word);
	char guess;
	int correct = 0;

	printf("please pick a letter: ");
	scanf("%c", &guess);
	for(int i = 0; i < length; i++){ 
		if (word [i] == guess){
        correct = 1;    
        } else { 
		correct = 0;
    printf("u got it wrong pls try again: ")
		break;
        }
    return 0; 
}