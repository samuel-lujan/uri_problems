#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome[500];
    scanf("%s", &nome);
    fflush(stdin);
    double salario, venda;
    scanf("%lf %lf", &salario, &venda);
    fflush(stdin);
    printf("TOTAL = R$ %.2lf\n", (salario)+(0.15*venda));
    return  0;
}
