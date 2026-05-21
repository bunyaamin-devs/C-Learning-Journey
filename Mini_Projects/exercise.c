#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char school[50];
    int score;
} studentInfo;

int main() {

    studentInfo students[3];

    int size = 3;

    for (int i = 0; i < size; i++) {

        printf("Enter your name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter the name of your school: ");
        fgets(students[i].school, sizeof(students[i].school), stdin);
        students[i].school[strcspn(students[i].school, "\n")] = '\0';

        printf("Enter your score: ");
        scanf("%d", &students[i].score);
        getchar();

        printf("\n");
    }

    int max = students[0].score;
    for(int i = 0; i < size; i++){
        if(students[i].score > max){
            max = students[i].score;
        }
    }

    int studentTied = 0;
    for(int i = 0; i < size; i++){
        if(students[i].score == max){
            studentTied++;
        }
    }

    if(studentTied == 3){
        printf("All three contestants are tied with the score of %d", max);
    }

    else if(studentTied == 2){
        printf("Tied between: ");
        for(int i = 0; i < size; i++){
            if(students[i].score == max){
                printf("%s of %s ", students[i].score, students[i].school);
            }
        }
        printf("with the score of %d", max);
    }

    else{
        for(int i = 0; i < size; i++){
            if(students[i].score == max){
                printf("%s of %s got the highest score of %d", students[i].name, students[i].school, students[i].score);
            }
        }
    }


    return 0;
}