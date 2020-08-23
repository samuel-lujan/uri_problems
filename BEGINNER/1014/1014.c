#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int litros;
    float rodado;
    scanf("%d %f", &litros, &rodado);
    printf("%.3f km/l\n", (litros/rodado));
    return 0;
}
