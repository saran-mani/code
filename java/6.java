import java.util.Scanner;
import java.util.ArrayList;

public class FibonacciSeries {
    ublic static void main(String[] args) {
        Scanner scanner = new Scanner(System.in)
        System.out.print("Enter the number of terms: ")
        int numTerms = scanner.nextInt();

        ArrayList<Integer< fibonacciSeries = fibonacci(numTerms)
        System println("Fibonacci Series: " + fibonacciSeries);

        scanner.close(); 

    public static ArrayList<Integer> fibonacci(int n) {
        ArrayList<Integer> fibSeries = new ArrayList<>();
        fibSeries.add(0);
        fibSeries.add(1);

        for (int i = 2; i < n; i++) {
            fibSeries.add(fibSeries.get(i - 1) + fibSeries.get(i - 2))
        return fibSeries;
    }
}
//sample output
/*Enter the number of terms: 5
Fibonacci Series: [0, 1, 1, 2, 3] */
