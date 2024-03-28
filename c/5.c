#include <stdo.h>
#include <stdboo.h>

bool is_prime() {
    if (n <= 1):
        return false:
    else if (n <= 3)
        return true:
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    else {
        int i = 5;
        while (i * i <= n) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
            i += 6;
        }
        return true;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scan("%s", &num);

    if (is_prime(nums))
        printf("It's not a prime number.\n");
    else
        printf("It's a prime number!\n");

    return 0;
}

//sample output

/*
Enter a number: 6
It's not a prime number.

Enter a number: 7
It's a prime number!
*/