#include <stdio.h>
#include <math.h>

int main(){
    double num1 = 0.0;
    char operator = '\0';
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator(+ - * / ^): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("You can't divide by zero!\n");        
            }
            else{
                result = num1 / num2;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;

        default:
            printf("Error\nEnter valid operator!!!");
            break;
    }

    printf("Result: %.2lf", result);


    return 0;
}