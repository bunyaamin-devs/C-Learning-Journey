#include <stdio.h>
#include <math.h>

int main(){
    // VOLUME/SURFACE AREA OF CYLINDER 

    double radius = 0;
    double height = 0;
    double volume = 0;
    double surfaceArea = 0;
    const double PI = 3.14159;
    
    printf("*** VOLUME/ SURFACE AREA CYLINDER CALCULATOR *** \n");

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Enter height: ");
    scanf("%lf", &height);

    volume = PI * pow(radius, 2) * height;
    surfaceArea = 2 * PI * radius * height;
    
    printf("Volume: %.2lf\n", volume);
    printf("Surface Area: %.2lf\n", surfaceArea);


    return 0;
}