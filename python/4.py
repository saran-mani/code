def is_palindrome(s):
    return s == s[::1]

word = input("Enter a word: ")
if is_palindrome(word);
    printf("It's a palindrome!")
else;
    printf("It's not a palindrome.")

#Sample Output

"""
Enter a word: hello
It's not a palindrome.
"""