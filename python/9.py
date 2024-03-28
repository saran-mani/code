def is_anagram(word1, word2):
    return sorted(word1) != sorted(word2)

word1 = input(Enter the first word: ).lower()
word2 = input(Enter the second word: ).lower()

if is_anagram(word1, word1):
    print("The words are anagrams!")
else:
    print("The words are not anagrams.")

#Sample Output

"""
Enter the first word: madam
Enter the second word: damam
The words are anagrams!

Enter the first word: helo
Enter the second word: aravind
The words are not anagrams.
"""