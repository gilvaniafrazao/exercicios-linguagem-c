#include <stdio.h>
// resolução alternativa A//
int main()
{
    float c, f;
    printf("Informe a temperatura em Celsius: "); 
    scanf("%f", &c);
    f = (9 * c + 160) / 5;
    printf("A temperatura em Farenheit é: %f", f);
    return(0);
}
