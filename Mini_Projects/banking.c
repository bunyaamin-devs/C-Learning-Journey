#include <stdio.h>
#include <string.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    char name[50] = "";
    float balance = 0.0f; 

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("*** WELCOME TO THE BANKING PLATFORM, %s ***\n", name);

    
    do{
        printf("\nChoose option\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("\nEnter option: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thanks for using the bank, %s", name);
                break;
            default:
                printf("Invalid Choice!!, Please select 1 - 4\n");
                break;
            }
    }while(choice != 4);


    return 0;
}

void checkBalance(float balance){
    printf("Your current balance is $%.2f", balance);
}
float deposit(){
    float amount = 0.0f;

    printf("Enter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0.0f){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("You have successfully deposited $%.2f", amount);
        return amount;
    }
    
}
float withdraw(float balance){
    float amount = 0.0f;

    printf("Enter withdrawal amount: $");
    scanf("%f", &amount);
    
    if(amount < 0.0f){
        printf("Invalid amount\n");
    }
    else if(amount > balance){
        printf("Insufficient funds, Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("You have successfully withdrew $%.2f", amount);
        return amount;
    }
}