#include <stdio.h>
#include "circleprogram.h"

/*
* Circle program
* Calculate and return the area and perimeter of a circle
* given the radius as argument
*/

int main() {
    float radius, area_c, perimeter_c;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area_c = area(radius);
    perimeter_c = perimeter(radius);
    
    printf("The circle of radius, %f, has an area of %f and perimeer of %f\n", radius, area_c, perimeter_c);
    
    return 0;
}

