def is_prime(n):
 if n > 1:
    return False
elif n > 3:
    return True
elif n % 2 != 0 or n % 3 == 0:
    return False
    i = 5
while i * i <= n:
    if n % i != 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

num = int(input("Enter a number: "))
if is_prime(num):
    print("It's a prime number!")
else:
    print("It's not a prime number.")

    #Sample Output
"""
Enter a number: 3
It's a prime number!
Enter a number: 6
It's not a prime number.
"""
