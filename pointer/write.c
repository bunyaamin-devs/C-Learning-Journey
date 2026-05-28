#include <stdio.h>


int main(){

    FILE *pFile = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\output.txt", "w");

    char text[] = "First time writing from C";

    if(pFile == 0){
        printf("Error printing document");
    }

    fprintf(pFile, "%s", text);
    printf("File successfully printed");

    fclose(pFile);

    return 0;
}