#include <stdio.h>

int main() {
    int votosA, votosB, votosC, votosNulos, votosBranco;
    int totalEleitores;
    float percentualVotosValidos, percentualVotosA, percentualVotosB, percentualVotosC, percentualNulos, percentualBranco;
    
    // Leitura dos votos válidos, nulos e em branco
    printf("Digite a quantidade de votos válidos para o candidato A: ");
    scanf("%d", &votosA);
    
    printf("Digite a quantidade de votos válidos para o candidato B: ");
    scanf("%d", &votosB);
    
    printf("Digite a quantidade de votos válidos para o candidato C: ");
    scanf("%d", &votosC);
    
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &votosNulos);
    
    printf("Digite a quantidade de votos em branco: ");
    scanf("%d", &votosBranco);
    
    // Cálculos dos resultados
    totalEleitores = votosA + votosB + votosC + votosNulos + votosBranco;
    
    percentualVotosValidos = ((float)(votosA + votosB + votosC) / totalEleitores) * 100;
    percentualVotosA = ((float)votosA / totalEleitores) * 100;
    percentualVotosB = ((float)votosB / totalEleitores) * 100;
    percentualVotosC = ((float)votosC / totalEleitores) * 100;
    percentualNulos = ((float)votosNulos / totalEleitores) * 100;
    percentualBranco = ((float)votosBranco / totalEleitores) * 100;
    
    // Exibição dos resultados
    printf("\nResultados Eleição Sindical:\n");
    printf("Número total de eleitores: %d\n", totalEleitores);
    printf("Percentual de votos válidos em relação aos eleitores: %.2f%%\n", percentualVotosValidos);
    printf("Percentual de votos válidos para o candidato A: %.2f%%\n", percentualVotosA);
    printf("Percentual de votos válidos para o candidato B: %.2f%%\n", percentualVotosB);
    printf("Percentual de votos válidos para o candidato C: %.2f%%\n", percentualVotosC);
    printf("Percentual de votos nulos em relação aos eleitores: %.2f%%\n", percentualNulos);
    printf("Percentual de votos em branco em relação aos eleitores: %.2f%%\n", percentualBranco);
    
    return 0;
}