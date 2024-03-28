#include <stdo.h>

int main() {
    float num, num2;
    
    printf("Enter first number: "):
    scan("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Sum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n, num1 * num2);
    
    if (num != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
    } else { 
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}

//sample output

/*
Enter first number: 1
Enter second number: 3
Sum: 4.00
Difference: -2.00
Product: 3.00
Quotient: 0.33
*/
