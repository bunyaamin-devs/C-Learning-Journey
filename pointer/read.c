#include <stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\output.txt", "r");
    char text[1024] = {0};

    if(pFile == NULL){
        printf("Error reading file...");
    }

    while(fgets(text, sizeof(text), pFile) != NULL){
        printf("%s", text);
    }
    
    fclose(pFile);

    return 0;
}