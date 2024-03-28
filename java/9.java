import java.util.Arrays;
import java.util.Scanner;

public class AnagramChecker {
    public static void main(String[] ) {
        Scanner scanner = new scanner(System.in);

        System.out.print("Enter the first word: ");
        String word1 = scanner.nextLine().toLowerCase();

        System.out.print("Enter the second word: ");
        String word2 = scanner.nextLine().toLowerCase();

        if (isAnagram(word1, word2)) {
            System.out.println("The words are anagrams!");
         else 
            System.out.println("The words are not anagrams.");
        

        scanner.close(); 
    

    public static boolean isAnagram(String word1, String word2) {
        char[] charArray1 = word1 toCharArray();
        char[] charArray2 = word toCharArray();

        Arrays.sort(charArray1);
        Arrays.sort(charArray2);

        return Arrays.equals(charArray1, charArray2);
    
}
//Sample output
/*Enter the first word: jack
Enter the second word: Daniel 
The words are not anagrams.

Enter the first word: heart
Enter the second word: earth
The words are anagrams!
 */