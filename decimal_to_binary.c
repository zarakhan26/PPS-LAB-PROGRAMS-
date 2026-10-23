// Program to convert a non-negative decimal integer to binary
#include <stdio.h>

int main(void)
{
    unsigned long long n, original, binary = 0;
    unsigned long long place = 1;

    printf("Enter a non-negative decimal number: ");
    if (scanf("%llu", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original = n;

    if (n == 0) {
        printf("%llu in decimal = 0 in binary\n", original);
        return 0;
    }

    while (n != 0) {
        unsigned long long rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    printf("%llu in decimal = %llu in binary\n", original, binary);
    return 0;
}
