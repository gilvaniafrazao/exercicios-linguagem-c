#include <stdio.h>

int main() {
    int A, B, C, D;
    int P, S;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    printf("Digite o valor de D: ");
    scanf("%d", &D);
    
    P = A * C;
    S = B + D;
    
    printf("Resultado do produto: %d\n", P);
    printf("Resultado da soma: %d\n", S);
    
    return 0;
}
