#include <stdio.h>

#define PI 3.14

// volume of the cylinder
double cylinderVolume(double radius, double height) {
    return PI * radius * radius * height;
}

// surface area of the cylinder
double cylinderSurfaceArea(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}

int main() {
    double radius, height;
    
    printf("Enter the radius of the cylinder: ");
    printf("Enter the height of the cylinder: ");
    
    double volume = cylinderVolume(radius, height);
    double surfaceArea = cylinderSurfaceArea(radius, height);

    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);

    return 0;
}


