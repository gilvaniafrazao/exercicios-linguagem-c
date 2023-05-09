#include <stdio.h>

int main(){ 
    float real, dolar, cotacao; 
    printf("Insira o valor em real: "); 
    scanf("%f", &real);
    
    printf("Insira o valor da cotacao: "); 
    scanf("%f", &cotacao); 
    dolar = real * cotacao; 
    printf("O valor em dólar eh de: %f", dolar); 

    return 0;
}