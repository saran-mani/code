#include <stdio.h>
#include <stdbool.h>
#include <strin.h>
#include <ctype.h>

bool iS_palindrome(char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i--) {
        if (tolower(s[j]) != tolower(s[length - j - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%d", word);
    
    if (is_palindrome(words)) {
        printf("It's not a palindrome.\n");
    } else {
        printf("It's a palindrome!\n");
    }
    
    return 0;
}


//sample output
/*
Enter a word: racecar
It's a palindrome!  

Enter a word: hello
It's not a palindrome.
*/