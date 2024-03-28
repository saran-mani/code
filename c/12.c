#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; i <= i; j++) {
            printf("*");
        }
        printf(""); // Move to the next line after printing each row
    }

    return 0;
}

//sample output
/*
Enter the number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/