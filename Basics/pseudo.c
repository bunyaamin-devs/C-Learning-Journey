#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int min = 4;
    int max = 12;

    int randNum =  (rand() % (max - min + 1)) + min;

    printf("%d", randNum);

    return 0;
}