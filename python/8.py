def calculate_bmi(weight, height):
    return weight / (height * 2)

weight = input("Enter weight in kg: ")
height = input("Enter height in meters: ")

bmi = calculate_BMI(Weight, Height)
print("Your BMI is:", bmi)

#Sample Output

"""
Enter weight in kg: 60
Enter height in meters: 6
Your BMI is: 1.6666666666666667
"""