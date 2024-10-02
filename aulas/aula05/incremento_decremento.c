#include <stdio.h>
int main() {

int numero;
  printf("digite um numero: ");
  int deu_certo = scanf("%i", &numero);

//processamento
  // numero = numero + 1;

  int incremento = numero;
  int pre_incremento = ++incremento;
  int pos_incremento = incremento++;
  incremento ++;
  // numero=numero-1
  int decremento = numero;
  int pre_decremento = --decremento;
  int pos_decremento = decremento--;
  decremento --;

  printf ("incremento de %i é %i\n", numero, incremento);
  printf ("pre incremento de %i é %i\n", numero, pre_incremento);
  printf ("pos incremento de %i é %i\n", numero, pos_incremento);
  printf ("decremento de %i é %i\n", numero, decremento); 
  printf ("pre decremento de %i é %i\n", numero, pre_decremento);
  printf ("pos decremento de %i é %i\n", numero, pos_decremento);
  return 0;
}
