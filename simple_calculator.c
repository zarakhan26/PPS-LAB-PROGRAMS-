#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
        case '+': printf("Result = %d\\n", a + b); break;
        case '-': printf("Result = %d\\n", a - b); break;
        case '*': printf("Result = %d\\n", a * b); break;
        case '/':
            if (b != 0) printf("Result = %.2f\\n", (double)a / b);
            else printf("Division by zero is not allowed.\\n");
            break;
        default: printf("Invalid operator.\\n");
    }
    return 0;
}