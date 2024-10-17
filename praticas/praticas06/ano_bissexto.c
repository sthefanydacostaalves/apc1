#include <stdio.h>
int main () {

int ano=0;

printf("digite o ano");
scanf("%i",&ano);

if (ano%4==0) { 
    printf("o ano eh bissexto"); }
else {
    printf("o ano nao eh bissexto");
}



    return 0;
}