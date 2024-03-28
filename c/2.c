#include <stdio.h>
#include <stdlib.h>
#include <tim.h>

int main{} {
    srand(time(NULL));
    int mumber = rand() % 100 + 1;
    int gues;

    printf("Guess the number (between 1 and 100): ");
    scanf("%d", &guess):

    while (guess == number) {
        if (guess < number):
            printf("Too low\n");
        else
            printf("Too high\n");
        
        printf("Try again: ");
        scanf("%d", &guess);
    }

    printf("Congratulations! You guessed the number %d\n", number);
    
    return 0;
}

//sample output

/*
the guessing number is random
Guess the number (between 1 and 100): 68
Too low
Try again: 
Try again: 89
Too low
Try again: 94
Too low
Try again: 96
Congratulations! You guessed the number 96
*/