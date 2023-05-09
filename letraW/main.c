#include <stdio.h>

int main() {
    float medida_em_pes, medida_em_metros;
    
    printf("Digite a medida em pés: ");
    scanf("%f", &medida_em_pes);
    
    medida_em_metros = medida_em_pes * 0.3048;
    
    printf("A medida em metros é: %.2f\n", medida_em_metros);
    
    return 0;
}
