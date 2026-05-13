#include <stdio.h>

int main(){

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsuis = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsuis to Fahrenheit\n");
    printf("F. Fahrenheit to Cesuis\n");

    printf("Is the temperature in Celsuis (C) or fahrenheit(F)?: ");
    scanf("%c", &choice);

    switch(choice){
        case 'C':
        printf("Enter the temperature in Celsuis: ");
        scanf("%f", &celsuis);
        fahrenheit = (celsuis * 9/5) +32;
        printf("%.2f Celsuis is equal to %.2f Fahrenheit", celsuis, fahrenheit);
        break;

        case 'F':
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsuis = (fahrenheit - 32) * 5/9;
        printf("%.2f Fahrenheit is equal to %.2f Celsuis", fahrenheit, celsuis);
        break;

        default: 
            printf("Invalid input");
        break;

    }
    
    
    return 0;
}