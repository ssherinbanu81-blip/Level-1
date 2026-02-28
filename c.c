11.#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    if (scanf("%f", &num) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    if (num > 0) {
        printf("The number is positive\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }

    return 0;
}


12.#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    if (scanf("%f", &num) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    if (num > 0) {
        printf("The number is positive\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }

    return 0;
}

13.#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age input!\n");
        return 0;
    }

    if (age <= 12) {
        printf("Ticket price category: Child\n");
        printf("Price: 50 units\n");
    } else if (age <= 18) {
        printf("Ticket price category: Teenager\n");
        printf("Price: 100 units\n");
    } else if (age <= 60) {
        printf("Ticket price category: Adult\n");
        printf("Price: 150 units\n");
    } else {
        printf("Ticket price category: Senior\n");
        printf("Price: 100 units\n");
    }

    return 0;
}

14.#include <stdio.h>

int main() {
    int total, perDay, days;
    printf("Enter total chocolates: ");
    scanf("%d", &total);
    printf("Enter chocolates consumed per day: ");
    scanf("%d", &perDay);
    printf("Enter planned number of days: ");
    scanf("%d", &days);

    if (total >= perDay * days) {
        printf("1 (Chocolates will last)\n");
    } else {
        printf("0 (Chocolates will run out)\n");
    }

    return 0;
}

15.#include <stdio.h>

int main() {
    int pens, notebooks, pencils;
    int total;

    printf("Enter quantity of pens: ");
    scanf("%d", &pens);
    printf("Enter quantity of notebooks: ");
    scanf("%d", &notebooks);
    printf("Enter quantity of pencils: ");
    scanf("%d", &pencils);

    total = pens*20 + notebooks*70 + pencils*9;
    printf("Total amount to pay: %d units\n", total);

    return 0;
}


16.#include <stdio.h>

int main() {
    int symptoms;
    printf("Enter number of symptoms: ");
    if (scanf("%d", &symptoms) != 1 || symptoms < 0) {
        printf("Invalid input! Enter a valid number of symptoms.\n");
        return 0;
    }

    if (symptoms >= 5) {
        printf("Critical condition - High Priority\n");
    } else if (symptoms >= 3) {
        printf("Moderate condition - Medium Priority\n");
    } else {
        printf("Stable condition - Low Priority\n");
    }

    return 0;
}

17.#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    printf("Enter basic salary: ");
    if (scanf("%f", &basic) != 1 || basic < 0) {
        printf("Invalid salary input!\n");
        return 0;
    }

    if (basic <= 70000) {
        hra = 0.30 * basic;
        da = 0.80 * basic;
    } else {
        hra = 0; // Not mentioned, keep 0
        da = 0;
    }

    gross = basic + hra + da;
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}

18.#include <stdio.h>

int main() {
    int angle;
    printf("Enter angle (0-360 degrees): ");
    if (scanf("%d", &angle) != 1 || angle < 0 || angle > 360) {
        printf("Invalid angle!\n");
        return 0;
    }

    if (angle == 0 || angle == 360) {
        printf("Direction: East\n");
    } else if (angle == 90) {
        printf("Direction: North\n");
    } else if (angle == 180) {
        printf("Direction: West\n");
    } else if (angle == 270) {
        printf("Direction: South\n");
    } else {
        printf("Angle does not exactly match a cardinal direction\n");
    }

    return 0;
}


19.#include <stdio.h>

int main() {
    float investment, purchasePrice, currentValue, profitLoss;
    printf("Enter initial investment: ");
    scanf("%f", &investment);
    printf("Enter stock purchase price: ");
    scanf("%f", &purchasePrice);
    printf("Enter current stock value: ");
    scanf("%f", &currentValue);

    profitLoss = (currentValue - purchasePrice) * investment / purchasePrice;

    if (profitLoss > 0) {
        printf("Profit: %.2f\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss: %.2f\n", -profitLoss);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}

20.#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    if (temp < 0) {
        printf("Freezing weather\n");
    } else if (temp < 10) {
        printf("Very Cold weather\n");
    } else if (temp < 20) {
        printf("Cold weather\n");
    } else if (temp < 30) {
        printf("Normal temperature\n");
    } else if (temp < 40) {
        printf("Hot\n");
    } else {
        printf("Very Hot\n");
    }

    return 0;
}