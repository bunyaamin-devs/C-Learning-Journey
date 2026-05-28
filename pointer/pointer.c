#include <stdio.h>

void birthday(int* lage);

int main(){

    int age = 18;
    int* lage = &age;

    birthday(lage);

    printf("You are %d years old", age);
    return 0;
}

void birthday(int* age){
    (*age)++;
}