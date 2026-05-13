#include <stdio.h>
#include <stdbool.h>

bool voteEligibility(int age){
    if(age >= 18 && age <= 85){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int age = 70;

    if(voteEligibility(age)){
        printf("You are eligible to vote.");
    }
    else{
        printf("You are not eligible to vote.");
    }
    
    return 0;
}