#include <stdio.h>
#include <stdlib.h>

int main(void){
    int p1, p2, q1, q2;
    float v1, v2;
    float soma;
    
    scanf("%d %d %f %d %d %f", &p1, &q1, &v1, &p2, &q2, &v2);
    soma = (q1 * v1)+ (q2 * v2);
    printf("VALOR A PAGAR: R$ %.2f\n", soma);
    return  0;
}
