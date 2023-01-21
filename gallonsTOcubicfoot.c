#include <stdio.h>
//write a program that input any number from user in GALLONS and display it in cubic feet.
//7.481 gallons = 1 cubic foot
//gallon / 7.48
//Format specifiers in C & c++ language %d %c %f 
// %d for deciaml 
// %c for char
// %f for float
int main(){
    int gallon;
    printf("ENTER THE GALLON \n");
    scanf("%d",&gallon);
    printf("cubic feet %f\n", gallon/7.48);
    return 0;
}