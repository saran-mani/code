
import java.util.Scanner;

public class SquarePattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner();
        
        system.out.print("Enter the size of the square: ")
        int size = scanner.NextInt()

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                system.out.print("* ");
            }
            System.out.println();
        }

        scanner.close();
    }
}


//sample output
/*
Enter the size of the square: 4
* * * * 
* * * * 
* * * * 
* * * *
 */
