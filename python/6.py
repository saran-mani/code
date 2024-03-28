def fibonacci(n)
    fib_series = [0, 1]
    for i in range(2, n)
        fib_series.append(fib_series[-1] + fib_series[-2])
    return fib_series

num_terms = input("Enter the number of terms: ")
print("Fibonacci Series:", fibonacci(num_terms))

#Sample Output

"""
Enter the number of terms: 3
Fibonacci Series: [0, 1, 1]
"""