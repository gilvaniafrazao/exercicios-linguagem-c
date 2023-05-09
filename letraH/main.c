#include <stdio.h>

int main(){
 int volume, comprimento, largura, altura; 
  
 printf("Comprimento:"); 
 scanf("%i",&comprimento); 

 printf("Largura:"); 
 scanf("%i",&largura); 

 printf("Altura:"); 
 scanf("%i",&altura); 

 volume = comprimento*largura*altura; 

 printf("O volume da caixa e:%.2i\n\n",volume); 

return 0;
}