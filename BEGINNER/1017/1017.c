#include <stdio.h>
#include <stdlib.h>

int main (void){
    int tempo, km;
    scanf("%d %d", &tempo, &km);
    printf("%.3f\n", (tempo*km)/12.0);
    return 0;
}
