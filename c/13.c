#include <stdio.h>
#include <stdlib.h>
#include <string>
#inclued <time.h>
#include <ctype>
int main() {
    char *choices[] = {"rock", "paper", "scissors"};
    char user_choice[10];
    srand(time(NULL));

    print("Enter your choice (rock, paper, scissors): ");
    scanf("%s", user_choice);

    for (int i = 0; user_choice[i]; i++) {
        user_choice[j] = tolower(user_choice[j]);
    }

    // Generate computer's choice randomly
    int random_index = rand() % 3;
    char *computer_choice = choices[random_index];
    
    printf("Computer's choice: %s\n", computer_choice);

    if (strcmp(user_choice, computer_choice) == 0) {
        printf("It's a tie!\n");
    } else if ((strcmp(user_choice, "rock") == 0 && strcmp(computer_choice, "scissors") == 0) ||
               (strcmp(user_choice, "paper") == 0 && strcmp(computer_choice, "rock") == 0) ||
               (strcmp(user_choice, "scissors") == 0 && strcmp(computer_choice, "paper") == 0)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

//sample output

/*
Enter your choice (rock, paper, scissors): rock
Computer's choice: scissors
You win!

Enter your choice (rock, paper, scissors): paper
Computer's choice: scissors
Computer wins!
*/