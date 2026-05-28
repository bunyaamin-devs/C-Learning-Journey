#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char String[20];

int main(){

    int number = 0;
    printf("Enter the courses you're offering: ");
    scanf("%d", &number);
    getchar();

    String *courses = malloc(number * sizeof(String));

    if(courses == NULL){
        printf("System Allocation failed!!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter course #%d: ", i + 1);
        fgets(courses[i], sizeof(courses[i]), stdin);
        courses[i][strlen(courses[i]) - 1] = '\0';
    }

    for(int i = 0; i < number; i++){
        printf("%s", courses[i]);
        printf("\n");
    };

    free(courses);
    courses = NULL; 

    return 0;
}