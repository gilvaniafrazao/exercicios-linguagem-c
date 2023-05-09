#include <stdio.h>

int main() {
    int base, expoente, resultado = 1;
    
        printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    printf("O resultado da potência %d elevado a %d é: %d\n", base, expoente, resultado);
    
    return 0;
}
