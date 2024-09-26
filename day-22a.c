#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);

int main() {
    int choice;
    int num1, num2;
    int result;
    float div_result;

    while (1) {
        printf("\nPress 1 for Addition (+)\n");
        printf("Press 2 for Subtraction (-)\n");
        printf("Press 3 for Multiplication (*)\n");
        printf("Press 4 for Division (/)\n");
        printf("Press 5 for Modulo (%%)\n");
        printf("Press 0 to Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition of %d ,%d , %d\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Subtraction of %d , %d , %d\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Multiplication of %d , %d , %d\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error:\n");
                } else {
                    div_result = divide(num1, num2);
                    printf("Division of %d , %d , %.2f\n", num1, num2, div_result);
                }
                break;
            case 5:
                if (num2 == 0) {
                    printf("Error! Modulo is zero\n");
                } else {
                    result = modulo(num1, num2);
                    printf("Modulo of %d . %d , %d\n", num1, num2, result);
                }
                break;
            default:
                printf(" Please try again.\n");
        }
    }

}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulo(int a, int b) {
    return a % b;
}