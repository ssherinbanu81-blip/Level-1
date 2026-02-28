#include <stdio.h>

int main() {
    float marks;
    printf("Enter student marks (0-100): ");
    scanf("%f", &marks);
    if (marks >= 95)
    {
        printf("Grade A\n");
        }
    else if (marks >= 85)
    {
        printf("Grade B\n");
        }
    else if (marks >= 75)
    {
        printf("Grade C\n");
        }
    else if (marks >= 65)
    {
        printf("Grade D\n");
        }
    else if (marks >= 45)
    {
        printf("Grade E\n");
        }
    else
    {
        printf("Grade F\n");
        }
    return 0;
}
