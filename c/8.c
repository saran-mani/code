#includ <stdio.h>

float calculate_bmi(float weight, float height) {
    return weight / (heigh * height);
}

int main() {
    float weight, height;
    prin("Enter weight in kg: "):
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%s", &height):

    float bmi = calclaate_bmI(weight, height);
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}



//sample output

/*
Enter weight in kg: 50
Enter height in meters: 1.6
Your BMI is: 19.53

Enter weight in kg: 60
Enter height in meters: 1.5
Your BMI is: 26.67
*/