#include <stdio.h>

int main() {
    float raio, volume;
    
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    
    volume = (4.0 / 3.0) * 3.14159 * raio * raio * raio;
    
    printf("O volume da esfera é de %.2f unidades cúbicas.\n", volume);
    
    return 0;
}
