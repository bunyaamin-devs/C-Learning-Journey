#include <stdio.h>
#include <string.h>

void birthdayWish(char name[], int age){
    printf("\nHappy birthday to you\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you %s.\n", name);
    printf("You are %d years today.\n", age);
}

int main(){

    char name[50] = "";
    int age = 0;

    printf("Celebrant's name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Celebrant's age: ");
    scanf("%d", &age);
    
    birthdayWish(name, age);

    return 0;
}

