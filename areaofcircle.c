#include <stdio.h>

// we will be getting the area of a circle
// externalizing the variable
extern int diameter;
extern int area;
extern int radius;

int main() {
    
    int diameter, radius;
    
    int area;
    // the variables
    
    // the diameter
     diameter = 28;
    
    // the radius
    radius = diameter / 2;
    
    // the area
    area = 22 * (radius * radius) / 7;
    
    printf("The area of a circle is: %d", area);
    
}