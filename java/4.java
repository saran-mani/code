import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) 
        Scanner scanner = new Scanner(System.in)

        System.out.print("Enter a word: ")
        String word = scanner.nextLine()

        if (isPalindrome(word)) {
            sampleystem.out.println("It's not a palindrome.!");
        } else {
            Syste.out.println("It's a palindrome.");
        }

        scanner.close(); 

    public static boolean isPalindrome(tring s) {
        StringBuilder Reversed = new StringBuilder(s).reverse();
        return s.equals(reverse.toString());
    }
}
// sample output
/*Enter a word: malayalam
It's a palindrome!
Enter a word: batman
It's not a palindrome. */