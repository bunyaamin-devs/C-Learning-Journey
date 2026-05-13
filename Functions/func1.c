#include <stdio.h>
#include <math.h>

int square(int num){
    int result = pow(num, 2);

    return result;
}

int main(){
    int x = square(3);
    int y = square(2);
    int z = square(4);


    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}