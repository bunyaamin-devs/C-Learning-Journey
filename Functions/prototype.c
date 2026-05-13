#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void name(char name[], int age);
bool ageCheck(int age);

int main(){

    /*function prototype provides compiler info about a functions name, return type, and parameters before its actual definition
    Enables type checking and allows functions to be used before they're defined.*/ 

    char name[50] = "";
    int age = 0;
    char firm[50] = "";

    printf("What is your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Which firm will you like to work at:?");
    fgets(firm, sizeof(firm), stdin);
    name[strlen(firm) - 1] = '\0';
    
    printf("How old are you:? ");
    scanf("%d", &age);
    

    if(ageCheck(age)){
        printf("\nYou are qualified to work at %s", firm);
    }
    else{
        printf("You must be 16+ to work at %s", firm);
    }
    return 0;
}

void name(char name[], int age){
    printf("Hello my name is %s", name);
    printf("I am %d", age);
}
bool ageCheck(int age){
    
    return age >= 16;
}