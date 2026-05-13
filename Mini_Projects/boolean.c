#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 0.0f;
    bool isWorker = true;
    bool isSeniorWorker = true;
    char currency = '%';


    printf("Item Price: ");
    scanf("%f", &price);

    if(isWorker){
        if(isSeniorWorker){
            printf("Your discount as a Worker is 10%c\n", currency);
            printf("Your discount as a Senior worker is 20%c\n", currency);
            price *= 0.7;
        }
        else{
            printf("Your discount as a Worker is 10%c", currency);
            price *= 0.9;
        }
    }
    else{
        if(isSeniorWorker){
            printf("Your discount as a Senior Worker is 20%c", currency);
            price *= 0.8;
        }
    }

    printf("\nThe price of a ticket is %.2f", price);
    return 0;
}