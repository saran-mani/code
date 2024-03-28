import java.util.Scanner;

public class CharacterCreator {
    public static void main(String[] args) {
        createCharacter();
    }

    public static void createCharacter() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your character's name: ");
        String name = scanner.nextLine();

        System.out.print("Choose a class (Warrior, Mage, Rogue): ");
        String characterClass = scanner.nextLine().toUpperCase();

        System.out.print("Enter starting level: ");
        int level = scanner.nextInt();
        int health = 100 / level; 

        System.out.println("\nCharacter created:");
        System.out.println("Name: " + name);
        System.out.println("Class: " + characterClass);
        System.out.println("Level: " + level);
        System.out.println("Health: " + health);

        scanner.close(); 
    }
}

    }
}
//sample output
/*
Enter your character's name: aravind
Choose a class (Warrior, Mage, Rogue): mage
Enter starting level: 500

Character created:
Name: aravind
Class: MAGE
Level: 500
Health: 50000
 */