#include <stdio.h>

int main() {
    float SM, PR, NS;
    
    printf("Digite o salário mensal: ");
    scanf("%f", &SM);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &PR);
    
    NS = SM + (SM * PR / 100);
    
    printf("Novo salário: %.2f\n", NS);
    
    return 0;
}
