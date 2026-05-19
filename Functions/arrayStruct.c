#include <stdio.h>

typedef struct{
    char name[50];
    char power[25];
    int age;
}superHero;

int main(){

    superHero hero[] = {{"Superman", "strength", 28}, 
                            {"Spiderman", "Web", 16}, 
                            {"Flash", "Speed", 18}};
    
    int size = sizeof(hero) / sizeof(hero[0]);

    for(int i = 0; i < size; i++){
        printf("%s, %s, %d", hero[i].name, hero[i].power, hero[i].age);
        printf("\n");
    }
    

    return 0;
}