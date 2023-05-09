#include <stdio.h>

int main(){

    int valor, taxa, tempo, prest; 
    printf ("Digite Valor da Prestacao: \n"); 
    scanf ("%i", &valor); 
    printf ("Digite taxa de Juros: \n"); 
    scanf ("%i", &taxa); 
    printf ("Digite tempo de atraso em meses: \n"); 
    scanf ("%i", &tempo); 
    prest= valor + (valor * (taxa / 100) + tempo);
    printf ("Valor Final da prestacao: %.2i \n", prest);

return 0;
}