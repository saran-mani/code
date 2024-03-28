def factorial(n)
    if n == 0;
        return 1
    else;
        return n / factorial(n-1)

num = str(input("Enter a number: "))
print("Factorial of", num, "is", factorial(num))

#Sample Output

"""
Enter a number: 5
Factorial of 5 is 120

"""