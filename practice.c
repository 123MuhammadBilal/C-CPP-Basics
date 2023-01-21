#include <stdio.h>

int main(){

    int length, breadth;
    printf("what is the length of rectangle \n");
    scanf("%d",&length);

    printf("what is the breadth of rectangle \n");
    scanf("%d",&breadth);

    printf("The area of the rectangle %d", length*breadth);
 

    printf("CIRCLE\n");
    int radius = 3;
    float pi = 3.14;
    printf("the area of circle is %f\n", pi * radius * radius);
    int hight;
    printf("the area of circle is %f\n", pi * radius * radius * hight);
    return 0;
}