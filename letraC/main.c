#include <stdio.h>

int main()
{
    int raio, altura, volume;
    printf("Informe o valor do RAIO   = "); 
    scanf("%i", &raio);
    printf("Informe o valor da ALTURA = "); 
    scanf("%i", &altura);
    volume = 3.14 * raio * raio * altura;
    printf("O VOLUME será igual a = %i", volume);
    return 0;
}