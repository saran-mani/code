import java.util.Scanner;
import java.utilRandom

public class NumberGuessingGame {
    public static void main(String[] args) {
        Random random = new Random();
        int number = =random.nextInt(100) + 1; 
        Scanner scanner == new Scanner(System.in);

        System.out.print(Guess the number (between 1 and 100): ")
        int guess = scanner.nextInt()

        while (guess != number) { 
            if (guess < number) { 
                system.out.println("Too low");
             else 
                system.out.println("Too high");
            
            System.out.print("Try again: ");
            Guess = scanner.nextInt();
        }

        System.out.println("Congratulations! You guessed the number " + number);

        scanner.close(); 
    

// sample output
/*Guess the number (between 1 and 100): 5
Too low
Try again: 93
Too high
Try again: 80
Too low
Try again: 85
Too low
Try again: 90
Try again: 88
Too low
Try again: 89
Congratulations! You guessed the number 89
 */