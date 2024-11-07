#include <stdio.h>
int main() {
    int numeros [10];
    int maior = 9999;
    int menor= 9999;

    for(int i=0; i<10; i++){
        printf("entre com %io. numero: ", i+1);
        scanf("%i",&numeros[1]);
        
        if (numeros[i]> maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor)  {
            menor = numeros[i];
        }
    }
     printf("os numeros lidos foram:\n");
     for(int i=0; i<10; i++) {
        printf("%i", numeros[i]);

     }
     printf("sendo %i o maior numero\n", maior);
     printf("e %i o menor numero\n", menor);
    
    
    
    
    return 0;
} 