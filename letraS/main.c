#include <stdio.h>

int main (){
    int A,B, soma, mult, div, sub;

    printf("Insira o valor de A =");
    scanf("%i", &A);

    printf("\nInsira o valor de B =");
    scanf("%i", &B);

    soma=A+B;
    mult=A*B;
    div=A/B;
    sub=A-B;

    printf("\nSOMA = %i ", soma);
    printf("\nMULTIPLICAÇÃO = %i", mult);
    printf("\nDIVISÃO = %i", div);
    printf("\nSUBTRAÇÃO = %i", sub);

    return 0;

}