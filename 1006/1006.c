#include <stdio.h>
#include <stdlib.h>

int main(void){
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    printf("MEDIA = %.1f\n", ((A*2) + (B*3) + (C*5))/10.0);
    return  0;
}
