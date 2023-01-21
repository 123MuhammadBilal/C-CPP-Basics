#include <stdio.h>
int main() {

    double radius, angle, area;
    
    printf("Enter the radius of the sector: ");
    scanf("%lf", &radius);

    printf("Enter the angle in radians of the sector: ");
    scanf("%lf", &angle);
    
    area = (radius * radius * angle) / 2;
    printf("The area of the sector is %lf sq. units.", area);
    
    return 0;

}