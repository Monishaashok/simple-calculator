#include <stdio.h>

// Function to perform the chosen operation
double calculate(double num1, double num2, char operator) {
    switch (operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 != 0)
                return num1 / num2;
            else {
                printf("Error: Division by zero.\n");
                return 0;
            }
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            return 0;
    }
}

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    result = calculate(num1, num2, operator);
    printf("Result: %.2lf\n", result);

    return 0;
}
