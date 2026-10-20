
#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    int i, pass = 1;

    printf("=== Student Grade Analyzer ===\n");

    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Enter values from 0 to 100.\n");
            return 1;
        }

        total += marks[i];

        if (marks[i] < 35) {
            pass = 0;
        }
    }

    percentage = total / 5.0f;

    printf("\n----- RESULT -----\n");
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (pass == 0) {
        printf("Result: FAIL\n");
        printf("Grade: Not awarded\n");
    } else {
        printf("Result: PASS\n");

        if (percentage >= 90)
            printf("Grade: A+\n");
        else if (percentage >= 80)
            printf("Grade: A\n");
        else if (percentage >= 70)
            printf("Grade: B\n");
        else if (percentage >= 60)
            printf("Grade: C\n");
        else if (percentage >= 50)
            printf("Grade: D\n");
        else
            printf("Grade: E\n");
    }

    return 0;
}
