#include <stdio.h>


int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    int size = (sizeof(numbers))/(sizeof(0));

    for(int i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }

    // for(int i = 0;i <= 4; i++){
    //     printf("%c\n",grades[i]);
    // }

    return 0;
}