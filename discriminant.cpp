
#include <stdio.h>
int main() {

    int a, b, c, disc;
    
    printf("Enter the value of A: ");
    scanf("%d", &a);

    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("Enter the value of C: ");
    scanf("%d", &c);
    
    disc = b * b - 4 * a * c;
    printf("The area of the sector is %lf sq. units.", disc);
    
    return 0;

}