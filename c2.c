41.#include <stdio.h>

int main() {
    float score, overs, runRate, percentage;
    printf("Enter total score: ");
    scanf("%f", &score);
    printf("Enter total overs played: ");
    scanf("%f", &overs);

    if (overs <= 0) {
        printf("Invalid input! Overs must be > 0\n");
        return 0;
    }

    runRate = score / overs;
    percentage = runRate * 100 / 6;  // Assuming 6 runs per over = 100%
    printf("Run rate percentage: %.2f%%\n", percentage);

    if (percentage < 50) {
        printf("Prediction: Opponent team likely to win\n");
    } else if (percentage == 50) {
        printf("Prediction: Both teams have equal chance\n");
    } else {
        printf("Prediction: Batting team likely to win\n");
    }

    return 0;
}

42.#include <stdio.h>

int main() {
    float temp, oil, rpm;
    printf("Enter temperature(°C), oil pressure(PSI), RPM: ");
    scanf("%f %f %f", &temp, &oil, &rpm);

    if (temp > 75 || oil < 12 || rpm > 7000) {
        printf("Engine Health: Poor\n");
    } else if (temp > 50 || oil < 12 || rpm > 4000) {
        printf("Engine Health: Fair\n");
    } else {
        printf("Engine Health: Good\n");
    }

    return 0;
}

43.#include <stdio.h>

int main() {
    float amount, discount;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount > 5000) {
        discount = 0.15 * amount;
    } else if (amount > 2000) {
        discount = 0.10 * amount;
    } else if (amount > 1000) {
        discount = 0.05 * amount;
    } else {
        discount = 0;
    }

    printf("Discount amount: %.2f\n", discount);
    printf("Final amount to pay: %.2f\n", amount - discount);

    return 0;
}


44.#include <stdio.h>

int main() {
    float x, y, z;
    printf("Enter coordinates x, y, z: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x == 0 && y == 0 && z == 0) {
        printf("Origin\n");
    } else if (x == 0 && y == 0) {
        printf("Z-axis\n");
    } else if (x == 0 && z == 0) {
        printf("Y-axis\n");
    } else if (y == 0 && z == 0) {
        printf("X-axis\n");
    } else if (x == 0) {
        printf("YZ-plane\n");
    } else {
        printf("Point is in space\n");
    }

    return 0;
}


45.#include <stdio.h>

int main() {
    float salary, increment;
    int rating;
    printf("Enter salary and performance rating (1-5): ");
    scanf("%f %d", &salary, &rating);

    if (rating < 1 || rating > 5) {
        printf("Invalid rating!\n");
        return 0;
    }

    if (rating == 1) {
        increment = 0.02 * salary;
    } else if (rating == 2) {
        increment = 0.05 * salary;
    } else if (rating == 3) {
        increment = 0.07 * salary;
    } else if (rating == 4) {
        increment = 0.10 * salary;
    } else {
        increment = 0.15 * salary;
    }

    printf("Annual increment: %.2f\n", increment);
    printf("New salary: %.2f\n", salary + increment);

    return 0;
}




46.#include <stdio.h>

int main() {
    int age, tickets;
    float price = 0, total;

    printf("Enter age of viewer: ");
    scanf("%d", &age);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (age <= 12) {
        price = 50;
    } else if (age <= 18) {
        price = 100;
    } else if (age <= 60) {
        price = 150;
    } else {
        price = 100;
    }

    total = price * tickets;

    if (tickets > 8) {
        total = total * 0.89; // 11% discount
    }

    printf("Total ticket cost: %.2f\n", total);
    return 0;
}



47.#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight(kg) and height(m): ");
    scanf("%f %f", &weight, &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    return 0;
}


48.#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a % 2 != 0 && b % 2 != 0) {
        float product = a * b;
        printf("Product: %.4f\n", product);
    } else {
        printf("One or both numbers are not odd.\n");
    }

    return 0;
}


49.#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10000 && num <= 99999) {
        printf("It is a 5-digit number.\n");
    } else {
        printf("It is not a 5-digit number.\n");
    }

    return 0;
}


50.#include <stdio.h>

int main() {
    float price;
    int quantity;
    char middleman;
    printf("Enter selling price per unit: ");
    scanf("%f", &price);
    printf("Enter quantity sold: ");
    scanf("%d", &quantity);
    printf("Enter middleman (A/B/C): ");
    scanf(" %c", &middleman);

    float total = price * quantity;

    if (middleman == 'A' || middleman == 'a') {
        total *= 0.90;
    } else if (middleman == 'B' || middleman == 'b') {
        total *= 0.85;
    } else if (middleman == 'C' || middleman == 'c') {
        total *= 0.80; 
    } else {
        printf("No deduction applied, invalid middleman\n");
    }

    printf("Total revenue after deduction: %.2f\n", total);
    return 0;
}