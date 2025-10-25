// MM CC EP Hangman
// hgey yalllll r u guys gud
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char elias_code(char *word)
{
    int correct;
    char guess;
    const char correctWord[6] = "builds";
    if (!strcmp(correctWord, word))
    // if (word == "builds")
    {
        printf("The word has six letters\n");
        printf("Pick a Letter: ");
        scanf(" %c", &guess); // attempt_uno was deleted because we decided we didn't need it. We should just use one variable so that it doesn't get too messy.
    }
    return guess;
}

int main(void)
{
    int correct;
    int hp = 0;                // I am going to use hp as the attempts. It will start at 0 for the hangman.
    char word[] = "builds";    // Keeping track of EVERY SINGLE LETTER is very difficult and should be kept separate from the attempts left.
    int length = strlen(word); // Charlie came up with the length variable!
    srand(time(NULL));
    int greet = rand() % 3 + 1;
    char guess;
    char display[] = "______";
    /* int successone;
    int successtwo;
    int successthree;
    int successfour;
    int successfive; //You can uncomment these if you figure out how to use them, but they will just get in the way. */
    // Elias worked on

    /*if (hp <= 0)
    {
        printf(":( GAME OVER, YOU FAILED, LOSE, GIT GUD, RIP, L, BOO HOO ):\n");
    }
    else if (hp > 0)
        printf("YOU WIN!!!!!!!");}*/

    if (greet == 1)
    {
        printf("Hello! Welcome to Hangman.\n");
    }
    else if (greet == 2)
    {
        printf("Welcome to Hangman, hello!\n");
    }
    else
    {
        printf("Welcome to Hangman!\n");
    }

    // Charlie's Code
    for (int i = 0; i < 7;)
    {
        char guess = elias_code(word);
        if (guess == 'b')
        {
            correct = 1;
            display[0] = 'b';
            printf("%s\n", display);
        }
        else if (guess == 'u')
        {
            correct = 1;
            display[1] = 'u';
            printf("%s\n", display);
        }
        else if (guess == 'i')
        {
            correct = 1;
            display[2] = 'i';
            printf("%s\n", display);
        }
        else if (guess == 'l')
        {
            correct = 1;
            display[3] = 'l';
            printf("%s\n", display);
        }
        else if (guess == 'd')
        {
            correct = 1;
            display[4] = 'd';
            printf("%s\n", display);
        }
        else if (guess == 's')
        {
            correct = 1;
            display[5] = 's';
            printf("%s\n", display);
        }
        else
        {
            correct = 0;
            printf("%s\n", display);
        }

        if (correct != 1)
        {
            i++;
            hp++;
            printf("That's wrong!\n");
        }
        else
        {
            printf("AYYY u got it\n");
            // for (int v = 0; v < 6; v++)
            // {
            //     display[v] = guess;
            //     printf("%s\n", display);
            //     break;
            // }
        }

        // Meika's Code
        if (hp == 0)
        {
            printf("\n\n\n");
        }
        else if (hp == 1)
        {
            printf("  o\n\n\n");
        }
        else if (hp == 2)
        {
            printf("  o\n  |\n\n");
        }
        else if (hp == 3)
        {
            printf("  o\n /| \n\n");
        }
        else if (hp == 4)
        {
            printf("  o\n /|\\ \n\n");
        }
        else if (hp == 5)
        {
            printf("  o\n /|\\ \n /\n");
        }
        else
        {
            printf("  o\n /|\\ \n / \\\nU lose!!! The word was: %s\n", word);
            return 1;
        }

        if (!strcmp(word, display))
        // strchr(display, 'b') != NULL && strchr(display, 'u') != NULL && strchr(display, 'i') != NULL && strchr(display, 'l') != NULL && strchr(display, 'd') != NULL && strchr(display, 's') != NULL

        {
            printf("\nU win!!! The answer was: %s\n", word);
            return 0;

            //     printf("U lose!!! The word was: %s\n", word);
            //     return 0;
            // }
            // 411
        }
    }
}

// Charlie worked on. > from meika- This code is really good but Elias has only been able to make one thing functional (get it?).
/* for (int i = 0; i < length; i++) { Hope you understand. We'll use your other code!
if (word[i] == guess) {
    printf("%c was corect", guess);
    correct = 1;
} else
i++;
}*/
