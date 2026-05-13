#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();
void getWinnerOutput(int UserChoice, int computerChoice);

int main(){
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");
    
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    

    switch (userChoice)
    {
    case 1:
        printf("You chose ROCK\n");
        break;
    case 2:    
        printf("You chose PAPER\n");
        break;
    case 3:    
        printf("You chose SCISSORS\n");
        break;
    }

    switch (computerChoice){
    case 1:
        printf("Computer chose ROCK\n");
        break;
    case 2:    
        printf("Computer chose PAPER\n");
        break;
    case 3:    
        printf("Computer chose SCISSORS\n");
        break;
    }

    getWinnerOutput(userChoice, computerChoice);

    return 0;
}

int getUserChoice(){
    int userChoice = 0;
    do{
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter Option: ");
        scanf("%d", &userChoice);
    }while(userChoice > 3 || userChoice < 1);

    return userChoice;
}

int getComputerChoice(){
    return (rand() % 3) + 1;

}

void getWinnerOutput(int userChoice, int computerChoice){
    if(userChoice == computerChoice){
        printf("It is a TIE!");
    }
    else if((userChoice == 1 && computerChoice == 3) 
        || (userChoice == 2 && computerChoice == 1) 
        || (userChoice == 3 && computerChoice == 1)){
        printf("You WIN!");
    }
    else{
        printf("You LOSE!!");
    }
}