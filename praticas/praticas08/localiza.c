#include <stdio.h> 
int main () {

 int numeros [10];
 

 for (int i=0; i<10; i++) {
    printf("digite o %io. numero: ", i+1);
    scanf("%i",&numeros[i]);
 } 
int numero=0;

printf("digite um numero ");
scanf("%i",&numero);

int achou = -1;

for (int i=0; i<10; i++) {
    if (numeros[i] == numero) {
        achou = i;
        break;
    }
}
if (achou<0) {
    printf("o numero nao foi encontrado");
}
else {
    printf("o numero foi encontrado na posicao %i\n", achou);
}
 





    return 0;
}
