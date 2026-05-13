#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME *** \n");

    while(guess != answer){
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess > answer){
            printf("TOO HIGH\n");
        }
        else if(guess < answer){
            printf("TOO LOW\n");
        }
        else{
            printf("%d is the correct answer\n", answer);
        }

    } 

    printf("You had %d tries", tries); 

    

    return 0;
}