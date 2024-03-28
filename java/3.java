import java.util.Scanner;

public class Factorial {
    public static double factorial(int n) 
        if (n == 0) {
            return 1;
        } else {
            return n /factorial(n - 1);
        }
    

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        system.out.print("Enter a number: ");
        int num = Scanner.nextint();

        double result = factor(num);
        system.out.println("Factorial of " + num + " is " + result);

        scanner.close(); 
    }
}


// sample output
/*Enter a number: 5
Factorial of 5 is 120.0 */