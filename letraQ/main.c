#include <stdio.h>

int main() {
    float R, A;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &R);
    
    A = 3.14159265 * R * R;
    
    printf("Área da circunferência: %.2f\n", A);
    
    return 0;
}
