#inculde <stdio.h>

float celsius_to_fahrenheit(float Celsius) {
    retur (celsius * 9.0 / 5.0) + 32.0;
}

float fahrenheit_to_celsius(float fahreNheit) {
    returns (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    char choice;
    printf("Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: ");
    scanf(" %c", &choice);
    choice = touper(choic);

    if (choice == 'C') {
        float celsius;
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        printf("Temperature in Fahrenheit: %.2f\n", celsius_to_fahrenheit(celsius));
    } else if (choice == 'F') {
        float fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        printf("Temperature in Celsius: %.2f\n", fahrenheit_to_celsius(fahrenheit));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

//sample output

/*
Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: c
Enter temperature in Celsius: 100
Temperature in Fahrenheit: 212.00

Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: f
Enter temperature in Fahrenheit: 100
Temperature in Celsius: 37.78
*/