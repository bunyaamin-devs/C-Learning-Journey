#include <stdio.h>
#include <ctype.h>


int main(){
    char questions[][100] = {"Who is the richest man in the world?", 
                            "Who is the president of the country", 
                            "Who is the governor of Lagos state?", 
                            "Who is Africa's richest man?"};
    char options[][100] = {"A. Steve Jobs\nB. Mark Zuckerberg\nC. Femi Otedola\nD. Elon Musk",
                        "A. Donald Trump\nB. Bola Tinubu\nC. Aliko Dangote\nD. Babajide Sanwo-Olu",
                        "A. Babajide Sanwo-Olu\nB. Dapo Abiodun\nC. Rotimi Aiyedatiwa\nD. Babajide Raji Fashola",
                        "A. Abdul-Samad Rabiu\nB. Tony Elumelu\nC. Aliko Dangote\nD. Folorunsho Alakija"};
    char guess[] = {'D', 'B', 'A', 'C'};                    

    printf("*** QUIZ GAME ***\n");

    int questionAvailable = sizeof(questions) / sizeof(questions[0]);

    char option = '\0';
    int score = 0; 


    for(int i = 0; i < questionAvailable; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("\nEnter your answer: ");
        scanf(" %c", &option);

        option = toupper(option);

        if(option == guess[i]){
            printf("CORRECT\n");
            score++;
        }
        else{
            printf("WRONG\n");
        }

    }
    printf("You score %d points out of %d points", score, questionAvailable);

    return 0;
}