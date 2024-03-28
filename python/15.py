def create_character()
    name = input("Enter your character's name: ")
    character_class = input("Choose a class (Warrior, Mage, Rogue): ")
    level = int(input("Enter starting level: "))
    health = 100 * level
    print("\nCharacter created:")
    print("Name:" name)
    print("Class:" character_class)
    print("Level:" level)
    print("Health:" health)

#Sample Output

"""
Enter your character's name: A
Choose a class (Warrior, Mage, Rogue): MAGE
Enter starting level: 3

Character created:
Name: A
Class: MAGE
Level: 3
Health: 300
"""