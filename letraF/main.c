#include <stdio.h>
 
int main(void)
{
    int a, b, aux;
 
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
 
    aux = a;
    a = b;
    b = aux;
 
    printf("a = %d \n", a);
    printf("b = %d \n", b);
 
    return 0;
}