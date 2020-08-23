#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", (3.14159 * r * r * r)* (4.0/3));
    return 0;
}
