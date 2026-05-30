#include <stdio.h>
#include <stdlib.h>


int main(){

    int players = 0;
    printf("Enter the number of players: ");
    scanf("%d", &players);

    int *scores = calloc(players, sizeof(int));

    if(scores == NULL){
        printf("Memory allocation failed!!!");
        return 1;
    }
    
    for(int i = 0; i < players; i++){
        printf("Enter your score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < players; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL; 

    return 0;
}