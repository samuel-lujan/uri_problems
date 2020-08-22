#include<stdio.h>
#include<stdlib.h>

int main(void){
    double B, A;
    scanf("%lf %lf",&A, &B);
    double MEDIA = ((3.5 * A) + (7.5*B))/11.0;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}