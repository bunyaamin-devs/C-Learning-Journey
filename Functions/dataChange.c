#include <stdio.h>

typedef enum {
    SUCCESS, FAILED, PENDING
} Status;

void statusFeed(Status status);

int main(){

    Status status = PENDING;

    statusFeed(status);

    return 0;
}

void statusFeed(Status status){

    switch (status){
    case SUCCESS:
        printf("Connection was successful");
        break;
    case FAILED:
        printf("Was not connected");
        break;    
    default:
        printf("Connecting...");
        break;
    } 
}