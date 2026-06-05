#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String[50];

int main(){

    int number;

    printf("Enter the number orders to place: ");
    scanf("%d", &number);
    getchar();

    String *order = malloc(number * sizeof(String));

    if(order == NULL){
        printf("Memory allocation failed!!");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Enter your order #%d: ", i + 1);
        fgets(order[i], sizeof(order[i]), stdin);
        order[i][strcspn(order[i], "\n")] = '\0';
    }

    int option;
    printf("Are you done ordering?? (YES - 1/NO - 2): ");
    scanf("%d", &option);
    getchar();

    switch(option){
        case 1:
            printf("\nYour Orders:\n");
            for(int i = 0; i < number; i++){
                printf("%s\n", order[i]);
            }
            break;
        case 2:
            int newNumber;
            printf("How much more do you want to order?: ");
            scanf("%d", &newNumber);
            getchar();

            String *newOrder =
            realloc(order, (number + newNumber) * sizeof(String));

            if(newOrder == NULL){
                printf("Reallocation of memory failed!!!");
            }
            else{
                order = newOrder;
                for(int i = number; i < number + newNumber; i++){
                    printf("Enter your order #%d: ", i + 1);
                    fgets(order[i], sizeof(order[i]), stdin);
                    order[i][strcspn(order[i], "\n")] = '\0';
                }

                number += newNumber;
                printf("\nUpdated Orders:\n");

                for(int i = 0; i < number; i++){
                    printf("%s\n", order[i]);
                }
            }
            break;
        default:
            printf("Please Enter valid input");
            break;
    }

    free(order);
    order = NULL;

    return 0;
}