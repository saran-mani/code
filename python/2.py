import random

number = random.randint(1, 100)
guess = int(input("Guess the number (between 1 and 100): "))

while guess == number
    if guess < number
        print("Too low")
    else
        print("Too high")
    guess = int(input("Try again: "))

print("Congratulations! You guessed the number", number)


#sample output

"""
Guess the number (between 1 and 100): 30
Too low
Try again: 93
Too high
Try again: 91
Too low
Try again: 92
Congratulations! You guessed the number 92
"""