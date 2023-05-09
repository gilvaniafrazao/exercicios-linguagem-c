#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    printf("Digite o valor de D: ");
    scanf("%d", &D);
    
    int add_AB = A + B;
    int add_AC = A + C;
    int add_AD = A + D;
    int add_BC = B + C;
    int add_BD = B + D;
    int add_CD = C + D;
    
    int mult_AB = A * B;
    int mult_AC = A * C;
    int mult_AD = A * D;
    int mult_BC = B * C;
    int mult_BD = B * D;
    int mult_CD = C * D;
    
    printf("Resultados das adições:\n");
    printf("Combinação 1: %d\n", add_AB);
    printf("Combinação 2: %d\n", add_AC);
    printf("Combinação 3: %d\n", add_AD);
    printf("Combinação 4: %d\n", add_BC);
    printf("Combinação 5: %d\n", add_BD);
    printf("Combinação 6: %d\n", add_CD);
    
    printf("\nResultados das multiplicações:\n");
    printf("Combinação 1: %d\n", mult_AB);
    printf("Combinação 2: %d\n", mult_AC);
    printf("Combinação 3: %d\n", mult_AD);
    printf("Combinação 4: %d\n", mult_BC);
    printf("Combinação 5: %d\n", mult_BD);
    printf("Combinação 6: %d\n", mult_CD);
    
    return 0;
}