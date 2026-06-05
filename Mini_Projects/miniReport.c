#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct{
    char name[50];
    int score;
}studentInfo;

void getStudentGrade(int score);
void getHighestScore(studentInfo student[], int amount);
void getLowestScore(studentInfo student[], int amount);

int main(){

    char grade;
    int amount;
    printf("Enter the number of pupils: ");
    scanf("%d", &amount);
    getchar();

    studentInfo *student = calloc(amount, sizeof(studentInfo)); 

    if(student == NULL){
        printf("Memory Allocation Failed!!");
    }


    for(int i = 0; i < amount; i++){
        printf("Enter student #%d name: ", i + 1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strlen(student[i].name) - 1] = '\0';

        printf("Enter student #%d score: ", i + 1);
        scanf("%d", &student[i].score);
        getchar();

        printf("\n");
    }
    
    for(int i = 0; i < amount; i++){
        printf("Student #%d grade = ", i + 1);
        getStudentGrade(student[i].score);
        printf("\n");

    }
    getHighestScore(student, amount);
    getLowestScore(student, amount);

    free(student);
    student = NULL;

    return 0;
}

void getStudentGrade(int score)
{
    if(score >= 70 && score <= 100){
        printf("A");
    }
    else if(score >= 65 && score < 70){
        printf("B");
    }
    else if(score >= 55 && score < 65){
        printf("C");
    }
    else if(score >= 45 && score < 55){
        printf("D");
    }
    else if(score >= 40 && score < 45){
        printf("E");
    }
    else if(score >= 0 && score < 40){
        printf("F");
    }
    else{
        printf("Invalid Input");
    }
}

void getHighestScore(studentInfo student[], int amount)
{
    int max = student[0].score;

    for(int i = 1; i < amount; i++){
        if(student[i].score > max){
            max = student[i].score;
        }
    }

    printf("\nHighest score: %d\nStudent/s: ", max);

    for(int i = 0; i < amount; i++){
        if(student[i].score == max){
            printf("%s ", student[i].name);
        }
    }
}

void getLowestScore(studentInfo student[], int amount)
{
    int min = student[0].score;

    for(int i = 1; i < amount; i++){
        if(student[i].score < min){
            min = student[i].score;
        }
    }

    printf("\nLowest score: %d\nStudent/s: ", min);

    for(int i = 0; i < amount; i++){
        if(student[i].score == min){
            printf("%s ", student[i].name);
        }
    }
}