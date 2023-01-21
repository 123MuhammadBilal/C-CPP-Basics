#include <stdio.h>

int main(){
        //(°C × 9/5) + 32 = °F
    printf("Celsius To Fahrenheit\n");
        int cel;
        scanf("%d",&cel);
        float mult = 1.8;
        int muster = 32 ;
        float geted = cel * mult;
        printf("%f",geted+muster);

        //(°C × 9/5) + 32 = °F
        printf("Celsius To Fahrenheit\n");
        int celsius = 1 , far;
        far = (celsius * 9 / 5) + 32 ;
        printf(" Fahrenheit is %f",far);
    return 0;
}