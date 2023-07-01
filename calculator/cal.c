#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Calculator\nType in an expression: \n");

    // Assigns variables to terms in the expression
    scanf("%f %c %f", &a, &op, &b);

    // Depending on the operator returns the result
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Unknown operation...");
            break;
    }
    printf("\nThe result is: %.4f", result);
    return 0;
}
