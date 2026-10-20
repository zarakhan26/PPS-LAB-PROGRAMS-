
#include <stdio.h>

int main() {
    int a[100], n, i, key, found = 0;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("%d found at position %d.\n", key, i + 1);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
