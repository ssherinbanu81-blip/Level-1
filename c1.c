31.#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 10 == 7) {
        printf("%d is a Buzz number\n", num);
    } else {
        printf("%d is not a Buzz number\n", num);
    }

    return 0;
}


32.#include <stdio.h>

int main() {
    float hours, rate, salary;
    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    if (hours <= 40) {
        salary = hours * rate;
    } else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }

    printf("Total salary: %.2f\n", salary);
    return 0;
}

33.#include <stdio.h>

int main() {
    float hours, rate, salary;
    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    if (hours <= 40) {
        salary = hours * rate;
    } else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }

    printf("Total salary: %.2f\n", salary);
    return 0;
}


34.#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate;
    int time;
    printf("Enter principal, rate(%%) and time in years: ");
    scanf("%f %f %d", &principal, &rate, &time);

    float amount = principal * pow(1 + rate/100, time);
    float ci = amount - principal;

    printf("Compound Interest: %.2f\n", ci);
    return 0;
}



35.#include <stdio.h>

int main() {
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);

    if (height < 150) {
        printf("Short\n");
    } else if (height < 165) {
        printf("Average height\n");
    } else if (height < 180) {
        printf("Tall\n");
    } else {
        printf("Very tall\n");
    }

    return 0;
}


36.#include <stdio.h>

int main() {
    int num, divisor;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error! Divisor cannot be zero.\n");
    } else if (num % divisor == 0) {
        printf("%d is divisible by %d\n", num, divisor);
    } else {
        printf("%d is not divisible by %d\n", num, divisor);
    }

    return 0;
}

37.#include <stdio.h>

int main() {
    float x, y;
    printf("Enter coordinates x and y: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Point is at the origin\n");
    } else if (x == 0) {
        printf("Point lies on Y-axis\n");
    } else if (y == 0) {
        printf("Point lies on X-axis\n");
    } else if (x > 0 && y > 0) {
        printf("Point lies in Quadrant I\n");
    } else if (x < 0 && y > 0) {
        printf("Point lies in Quadrant II\n");
    } else if (x < 0 && y < 0) {
        printf("Point lies in Quadrant III\n");
    } else {
        printf("Point lies in Quadrant IV\n");
    }

    return 0;
}



38.#include <stdio.h>

int main() {
    float speed, limit;
    printf("Enter speed limit: ");
    scanf("%f", &limit);
    printf("Enter vehicle speed: ");
    scanf("%f", &speed);

    if (speed > limit) {
        printf("Warning: Speed exceeds limit!\n");
    } else {
        printf("Speed is within limit.\n");
    }

    return 0;
}


39.#include <stdio.h>

int main() {
    int quantity;
    float price, total, discount;
    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    if (total > 1000) {
        discount = 0.10 * total;
    } else if (total > 500) {
        discount = 0.05 * total;
    } else {
        discount = 0;
    }

    printf("Total cost: %.2f\n", total - discount);
    printf("Discount applied: %.2f\n", discount);

    return 0;
}


40.#include <stdio.h>

int main() {
    float miles, gallons, mpg;
    printf("Enter miles driven: ");
    scanf("%f", &miles);
    printf("Enter gallons used: ");
    scanf("%f", &gallons);

    if (gallons <= 0) {
        printf("Invalid input! Gallons must be > 0\n");
        return 0;
    }

    mpg = miles / gallons;
    printf("MPG: %.2f\n", mpg);

    if (mpg < 15) {
        printf("Gas mileage: Poor\n");
    } else if (mpg < 25) {
        printf("Gas mileage: Average\n");
    } else if (mpg < 35) {
        printf("Gas mileage: Good\n");
    } else {
        printf("Gas mileage: Excellent\n");
    }

    return 0;
}

