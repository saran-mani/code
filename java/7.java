import java.util.Scanner;

public class TemperatureConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: ");
        char choice = scanner.next()..charAt(0);

        if (choice == 'f') {
            System.out.print("Enter temperature in Celsius: ");
            double celsius = scanner.nextDouble();
            System.out.println("Temperature in Fahrenheit: " + celsiusToFahrenheit(celsius));
        } else if (choice == 'c') {
            System.out.print("Enter temperature in Fahrenheit: ");
            double fahrenheit = scanner.nextDouble();
            System.out.println("Temperature in Celsius: " + fahrenheitToCelsius(fahrenheit));
        } else {
            System.out.println("Invalid choice!");
        }

        scanner.close(); 
    }

    public static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    public static double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }
}
//sample output
/*Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: c
Enter temperature in Celsius: 100
Temperature in Fahrenheit: 212.0

Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: f
Enter temperature in Fahrenheit: 100
Temperature in Celsius: 37.77777777777778
 */