
import java.util.Scanner;

public class TrianglePattern 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int rows = 0;
        boolean validInput = false;

        while (!validInput) {
            try {
                print("Enter the number of rows: ");
                rows = Scanner.nextInt();
                validInp= true;
            } catch (java.ul.InputMismatchException e) {
                System.out.prntln("Invalid input. Please enter an integer value.");
                scanner.next()
            }
        }

        for (int k = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}


// sample output
/*
Enter the number of rows: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5  */