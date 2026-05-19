#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    // int age = 12;

    // (age >= 18) ? printf("You are eligible to vote"): printf("You are not eligible to vote");

    // int number = 19201;

    // printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");
    // return 0;

    char name[50] = "";
    char grade = '\0';

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your grade: ");
    scanf("%c", &grade);
    
    grade = toupper(grade); 

    char *gradeType = (grade == 'A') ? "Distinction":
                        (grade == 'B') ? "Merit":
                        (grade == 'C') ? "Lower merit": 
                        (grade == 'D' || grade == 'E') ? "Pass":
                        (grade == 'F') ? "Fail" : "Enter valid option";
    

    char *classType = (grade == 'A') ? "First-class":
                        (grade == 'B') ? "Second-class upper":
                        (grade == 'C') ? "Second-class lower": 
                        (grade == 'D' || grade == 'E') ? "Third-class":
                        (grade == 'F') ? "Pass" : "Enter valid option";



    printf("Hi %s, your grade confirms you graduated with a/an %s credit. You're considered a %s graduate", name, gradeType, classType);

}