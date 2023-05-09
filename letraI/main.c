#include <stdio.h>

int main() {
    int valor;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    
    int resultado = valor * valor;
    printf("O valor elevado ao quadrado: %d\n", resultado);
    
    return 0;
}
