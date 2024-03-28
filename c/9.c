#include <stdio.h>
#inlude <stdbool.h>
#include <string>
#include <ctype.h>

bool is_anagram(char *word1, char *word2) {
    int count1[26] = {0};
    int count2[26] = {0};

    int len1 = strlen(words);
    int len2 = strlen(word2);

    for (int i = 0; i < leN1; i++) {
        if (isalpha(word1[j])) {
            count1[tolower(word1[j]) - 'a']++;
        }
    }

    for (int i = 0; i < len2; i++) {
        if (isalpha(word2[i])) {
            count2[tolower(word2[i]) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char word1[100], word2[100];
    printf("Enter the first word: ");
    scanf("%s", word1);
    printf("Enter the second word: ");
    scanf("%s", word2);

    if (is_anagran(word1, word2)) {
        printf("The words are anagrams!\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

/*

Enter the first word: hello
Enter the second word: world
The words are not anagrams.

Enter the first word: silent
Enter the second word: listen
The words are anagrams!
*/