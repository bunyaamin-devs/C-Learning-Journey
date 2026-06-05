#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
// #include <windows.h>


int main(){

    time_t rawTime = 0;
    struct tm *pTime;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){
        time(&rawTime);

        pTime = localtime(&rawTime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        sleep(1);
    }

    

    return 0;
}