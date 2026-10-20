
#include <stdio.h>

int main() {
    int num, original, temp, digit;
    int digits = 0;
    int sum = 0;
    int i, power;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    original = num;
    temp = num;

    do {
        digits++;
        temp = temp / 10;
    } while (temp != 0);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 0; i < digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
