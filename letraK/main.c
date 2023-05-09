#include <stdio.h>

int main(){ 
    float real, dolar, cotacao; 
    printf("Insira o valor em dolar: "); 
    scanf("%f", &dolar);
    
    printf("Insira o valor da cotacao: "); 
    scanf("%f", &cotacao); 
    real = dolar * cotacao; 
    printf("O valor em reais eh de: %f", real); 

    return 0;
}