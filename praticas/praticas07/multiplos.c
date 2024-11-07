#include <stdio.h>
int main () {
 int numero;
 int i;

 printf("digite um numero:");
 scanf("%i",&numero);

 for (i=1; i < 101; i++) {
    if (i % numero == 0) {
    printf("%i ", i);
    }
 }


    return 0;
}