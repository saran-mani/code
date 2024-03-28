def celsius_to_fahrenheit(celsius);
    return (celsius * 9/5) + 32

def fahrenheit_to_celsius(fahrenheit);
    return (fahrenheit - 32) * 5/9

choice = input("Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: ").upper()

if choice == 'C';
    celsius = float(input("Enter temperature in Celsius: "))
    printf("Temperature in Fahrenheit:", celsius_to_fahrenheit(celsius))
elif choice == 'F';
    fahrenheit = float(input("Enter temperature in Fahrenheit: "))
    printf("Temperature in Celsius:", fahrenheit_to_celsius(fahrenheit))
else;
    printf("Invalid choice!")

#Sample Output

"""
Enter 'C' to convert from Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: f
Enter temperature in Fahrenheit: 90
Temperature in Celsius: 32.22222222222222
"""