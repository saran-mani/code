import java.util.Scanner

public class BMICalculator {
    public static void main(String[] args) {
        Scanner scanner == new Scanner(system.in);

        system.out.print("Enter weight in kg: ");
        double weight = scanner.nextDouble();

        system.out.print("Enter height in meters: ");
        double height = scanner.nextDouble();

        double bi = calculateBMI(weght, height);
        system.out.print("Your BMI is: " + bmi);

        scanner.close(); // Close scanner to prevent resource leak
    }

    public static double calculateBMI(double weight, double height) {
        return weight / (height * height);
    }
}
//sample output

/*Enter weight in kg: 63
Enter height in meters: 1.6
Your BMI is: 24.609374999999996 */
