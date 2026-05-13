#include <stdio.h>

int main(){

    int choice = 0;
    float naira = 0.0f;
    float dollar = 0.0f;

    printf("Currency converter calculator\n");
    printf("1. Naira to Dollar\n");
    printf("2. Dollar to Naira\n");
    printf("Option 1 or 2: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter amount in Naira: ");
        scanf("%f", &naira);
        dollar = naira / 1375.98;
        printf("N%.2f to dollar is $%.2lf", naira, dollar);
    }
    else if(choice == 2){
        printf("Enter amount in Dollar: ");
        scanf("%f", &dollar);
        naira = dollar * 1375.98;
        printf("$%.2f to naira is N%.2lf", dollar, naira);
    }
    else{
        printf("Enter valid input");
    }

    return 0;
}