#include <stdio.h>
int main() {
  // entrada
 int numero1;
 int numero2;

  printf("digite um numero: ");
  int deu_certo = scanf("%i", &numero1);
  printf("digite outro numero: ");
  deu_certo = scanf("%i", &numero2);

  // processamento
  int igual = numero1 == numero2;
  int diferente = numero1 != numero2;
  int menor = numero1 < numero2;
  int menor_igual = numero1 <= numero2;
  int maior = numero1 > numero2;
  int maior_igual = numero1 >= numero2;
  // saida
  printf("%i é igual a %i? %i\n",numero1,numero2, igual);
  printf("%i é diferente de %i? %i\n",numero1,numero2, diferente);
  printf("%i é menor que %i? %i\n",numero1,numero2, menor);
  printf("%i é menor ou igual a %i? %i\n",numero1,numero2,menor_igual);
  printf("%i é maior que %i? %i\n",numero1,numero2, maior);
  printf("%i é maior ou igual a %i? %i\n",numero1,numero2, maior_igual);
  return 0;
}