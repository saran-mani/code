#include <stdio.h>
#include <string.h>
#include <ctype.h>

void create_character() {
    char name[50];
    char character_class[20];
    int level;
    int health;

    printf("Enter your character's name: ");
    scanf("%s", name);

    printf("Choose a class (Warrior, Mage, Rogue): ");
    scanf("%s", character_class);

    // Convert character_class to uppercase
    for (int i = 0; character_class[i]; i++) {
        character_class[i] = toupper(character_class[i]);
    }

    printf("Enter starting level: ");
    scanf("%d", &level);

    health = 100 * level;

    // printf("\nCharacter created:\n");
    // printf("Name: %s\n", name);
    // printf("Class: %s\n", character_class);
    // printf("Level: %d\n", level);
    // printf("Health: %d\n", health);
}

int main() {
    create_character();
    return 0;
}

//sample output

/*
Enter your character's name: M.S.Dhoni
Choose a class (Warrior, Mage, Rogue): Warrior
Enter starting level: 7

Character created:
Name: M.S.Dhoni
Class: WARRIOR
Level: 7
Health: 700
*/