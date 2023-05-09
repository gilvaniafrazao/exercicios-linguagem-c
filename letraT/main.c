#include <stdio.h>

int main() {
    float distancia, tempo, velocidade;
    
    printf("Digite a distância percorrida em quilômetros: ");
    scanf("%f", &distancia);
    
    printf("Digite o tempo decorrido em minutos: ");
    scanf("%f", &tempo);
    
    velocidade = (distancia * 1000) / (tempo * 60);
    
    printf("A velocidade do projétil é de %.2f metros por segundo.\n", velocidade);
    
    return 0;
}
