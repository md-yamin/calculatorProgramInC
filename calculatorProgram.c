#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nWhat type of operation would you like to use?");
    printf("\n + or - or * or / :");
    scanf("%c", &operator);

        printf("Input first number: \n");
        scanf("%lf", &num1);
        
        printf("Input second number: \n");
        scanf("%lf", &num2);
 
    switch(operator){
        
        case '+':
            result = num1 + num2;
            printf("\n Result: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n Result: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n Result: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n Result: %.2lf", result);
            break;        
        default:
        printf("%c is not valid", operator);

    }

    return 0;
}