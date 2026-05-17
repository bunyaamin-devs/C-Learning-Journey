#include <stdio.h>
#include <string.h>

int main(){
    
    // char courses[][10] = {"MTS", "PHY", "GST", "GNS"};

    // int size = sizeof(courses) / sizeof(courses[0]); 
    // for(int i = 0; i < size; i++){
    //     printf("%s ", courses[i]);
    // }

    char courses[5][50] = {0};

    for(int i = 0; i < 5; i++){
        printf("Enter five of the courses you're offering: ");
        fgets(courses[i], sizeof(courses[i]), stdin);
        courses[i][strlen(courses[i]) - 1] = '\0';
    }

    for(int i = 0; i < 5; i++){
        printf("%s ", courses[i]);
    }
    return 0;
}