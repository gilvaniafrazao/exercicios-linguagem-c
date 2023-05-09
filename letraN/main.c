#include <stdio.h>

int main (){

    int A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    D = A+B+C;

    printf("Resultado: %d", D*D);

    return 0;
}