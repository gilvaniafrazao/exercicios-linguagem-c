#include <stdio.h>

int main() {
    int A, B, resultado;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    resultado = (A / B) * (A / B);
    
    printf("O resultado do quadrado da divisão de A por B é: %d\n", resultado);
    
    return 0;
}
