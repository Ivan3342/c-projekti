#include <stdio.h>

int main() {

    char operator;
    float firstNumber;
    float secondNumber;
    float result;

    printf("Enter an operator: (+, -, *, /)\t");

    scanf(" %c", &operator);

    printf("Enter the first value: ");
    scanf("%f", &firstNumber);

    printf("Enter the second value: ");
    scanf("%f", &secondNumber);

    switch(operator) {
        case '+':
            printf("_ + _ = ?\n");
            result = firstNumber + secondNumber;
            break;
        case '-':
            printf("_ - _ = ?\n");
            result = firstNumber - secondNumber;
            break;
        case '*':
            printf("_ * _ = ?\n");
            result = firstNumber * secondNumber;
            break;
        case '/':
            if(secondNumber == 0) {
                printf("Error: You can not divide by 0.");
                return 1;
            }
            printf("_ / _ = ?\n");
            result = firstNumber / secondNumber;
            break;
        default:
            printf("Error: Invalid operator.");
            return 1;
    }

    printf("Result: %.3f", result);
 
    return 0;
}