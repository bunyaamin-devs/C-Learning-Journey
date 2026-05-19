#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isStudent;
}Student;

void studentInfo(Student student);

int main(){

    Student student1 = {"Bunyaamin", 18, 4.5, true};
    Student student2 = {0};

    strcpy(student2.name, "Olamide");
    student2.age = 19;
    student2.gpa = 4.8;
    student2.isStudent = true;

    studentInfo(student1);
    studentInfo(student2);

    return 0;
}

void studentInfo(Student student){
    printf("\nName: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isStudent) ? "Yes" : "No");

}