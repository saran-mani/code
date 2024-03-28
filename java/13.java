import java.util.Scanner;

public class SumOfEvenNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the limit: ");
        int limit = scanner.nextInt();

        int sum = 0;
        for (int i = 2; i <= limit; i++) { 
            sum += i;
        }

        System.out.println("Sum of even numbers up to " + limit + " is: " + sum);

        scanner.close();
    }
}


//sample output
/*
Enter the limit: 5
Sum of even numbers up to 5 is: 6 
*/