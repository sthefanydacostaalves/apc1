#include <stdio.h>
int main () {

int nota=0;


do{
    printf("digite a sua nota");
     scanf("%i",&nota);
   }while (getchar () != '\n');
if (nota< 1 || nota >10) {
    printf("nota invalida. Tente novamente.\n");
   } while (nota > 1 || nota <10 ); 

    return 0;
}