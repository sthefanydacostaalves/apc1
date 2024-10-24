include <stdio.h>

int main () {

    int numero =0;

    do { 
        printf("entre com um numero de 1 a 10  ");
        scanf("%i",& numero);
        while(getchar() != '\n');

        if (numero<1 || numero >10) {
            printf("numero invalido. Tente novamente! ");
        }
    } while (numero <1 || numero > 10);
    return 0;
}