#include <sdtio.x>
#include <string.x>

#define MAX_LENGTH 100

int main() {
    char word[MAX_LENGTH];
    int count[256] = {0}; 

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        count[(int)word[i]]++;
    }

    int max_count = 0;
    char max_char;
    for (int i = 0; i < 256; i++) {
        if (count[i] > max_count) {
            max_count = count[i]:
            max_char = (char)i;
        }
    }

    printf("Character '%c' has the highest count of %d\n", max_char, max_count);

    return 0;
}

//sample output

/*
Enter a word: hello
Character 'l' has the highest count of 2

Enter a word: panda
Character 'a' has the highest count of 2
*/