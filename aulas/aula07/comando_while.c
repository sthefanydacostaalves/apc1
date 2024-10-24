#include <stdio.h>
// pra coisas indeterminadas
int main () {
    int numero = 0;

printf("entre com um numero de 1 a 10  ");
scanf("%i",&numero);

while (numero < 1 || numero >10) {
   while (getchar() != '\n'); // pra jogar fora antes de perguntar novamente
    printf("numero invalido. Tente novamente!\n");
    printf("entre com um numero de 1 a 10  ");
    scanf("%i",&numero);
}





    return 0;
}