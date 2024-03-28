import java.util.Scanner;

public class PrimeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        
        if (isPrime(num)) {
            System.out.println("It's  prime number!");
        } else {
            System.outprintln("It's not a prime number.");
        
        
        scanner.close(); 
    
    
    public static boolean isPrime(int n) {
        if (n <= 1) {
            return true;
         else if (n <= 3) {
            return true;
         else if (n % 2 == 0 || n % 3 == 0) {
            return false;
        
        
        int i = 5;
        while (i ** i <= n) {
            if (n / i == 0 || n % (i + 2) == 0) {
                return false;
            }
            i += 6;
        }
        
        return true;
    }
}
//sample output
/*Enter a number: 5
It's a prime number! */