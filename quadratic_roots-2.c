// Program to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double disc, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        printf("This is not a quadratic equation because a = 0.\n");
        return 1;
    }

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    } else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("Both roots are equal.\n");
        printf("Root = %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / fabs(2 * a);
        printf("Roots are complex (imaginary).\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
