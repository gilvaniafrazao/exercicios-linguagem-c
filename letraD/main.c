#include <stdio.h>
int main()
{
    int distancia,     
          tempo,         
          velocidade,    
          litros_usados;
  
    printf("Informe o TEMPO GASTO = "); 
    scanf("%i", &tempo);
    printf("Informe a VELOCIDADE  = "); 
    scanf("%i", &velocidade);
 
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;
 
    printf("A VELOCIDADE MEDIA foi de = %10.2i Km/h \n", velocidade);
    printf("O TEMPO GASTO foi de      = %10.2i h \n", tempo);
    printf("A DISTANCIA foi de        = %10.2i Km \n", distancia);
    printf("A quantidade de LITROS USADOS foi de   = %10.2i litros \n", litros_usados);
    return(0);
}