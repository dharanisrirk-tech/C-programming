#include <stdio.h>
int main() {
    char choice = '+';
    int a = 10, b = 20;
    switch (choice) {
        case '+':
            printf("Sum = %d", a + b);
            break;
        case '-':
            printf("Difference = %d", a - b);
            break;
        case '*':
            printf("Product = %d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Quotient = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
