#include <stdio.h>

int main (){

    int A, B, C, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    resultado = A*A + B*B + C*C;

    printf("Resultado: %d", resultado);

    return 0;
}