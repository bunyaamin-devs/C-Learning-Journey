#include <stdio.h>

int main(){

    char name[50] = "";
    int age = 0.0f;
    char grade = '\0';
    float gpa = 0.00;

    printf("What is your name: ");
    fgets(name, sizeof(name), stdin);

    printf("How old are you: ");
    scanf("%d", &age);

    printf("What is your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("What is your gpa: ");
    scanf("%f", &gpa);


    printf("\n%s", name);
    printf("%d\n", age);
    printf("%c\n", grade);
    printf("%.2f\n", gpa);

    return 0;
}