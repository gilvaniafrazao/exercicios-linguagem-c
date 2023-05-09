#include <stdio.h>
// resolução alternativa B//
int main()
{
    float f, c;
    printf("Digite a temperatura em graus Fahrenheit:");
    scanf("%f", &f);
    c=((f * 9) / 5) + 32;
    printf("O valor em graus Celsius e:%f", c);
    return 0;
}