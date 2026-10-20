
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    float average;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
