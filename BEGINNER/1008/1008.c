#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero, hora;
    float salario;
    scanf("%d %d %f", &numero, &hora, &salario);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, (hora*salario));
    return  0;
}
