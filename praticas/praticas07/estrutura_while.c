#include <stdio.h>
int main() {

int nota=0;
printf("digite a sua nota entre 1 e 10: ");
scanf("%i",&nota);

while(nota < 1 || nota >10) {
    while(getchar() != '\n');
    printf("nota invalida.Tente novamente\n");
    scanf("%i", &nota);
} 


    return 0;
}