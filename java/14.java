import java.util.Scanner;

public class SumOfNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int sum = 0;
        int number;

        System.out.println("Enter numbers to sum (enter a negative number to stop):");

        do {
            System.out.print("Enter a number: ");
            number = scanner.nextInt();

            if (number >= 0) {
                sum += number;
            }
        } while (number <= 0);

        System.out.println("Sum of the entered numbers is: " + sum);

        scanner.close();
    }
}

//sample output
/*Enter numbers to sum (enter a negative number to stop):
Enter a number: 10
Enter a number: 50
Enter a number: 62
Enter a number: 56
Enter a number: 59
Enter a number: 56
Enter a number: 56
Enter a number: 57
Enter a number: -5
Sum of the entered numbers is: 406 */