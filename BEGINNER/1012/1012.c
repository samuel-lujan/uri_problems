#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", ((a*c)/2.0), (3.14159*c*c), (((a+b)*c)/2.0), (b*b),(a*b));
    return 0;
}
