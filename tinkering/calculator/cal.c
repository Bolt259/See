#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    while (1) {
        printf("Calculator\nType in an expression: \n");

        if (scanf("%c", &op) == 1){
            if(op == 'q' || op == 'Q'){
                break;
            }
        } else {
            // Assigns variables to terms in the expression
            scanf("%f %c %f", &a, &op, &b);
        }

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
        printf("\nThe result is: %.4f\n", result);
    }
    return 0;
}
