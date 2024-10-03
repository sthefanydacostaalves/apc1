#include <stdio.h>
int main(){
  
  int numero1;
  int numero2;
  float numero3;

  printf("entre com um numero: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);

  printf("entre com um numero decimal: ");
  deu_certo = scanf("%f", &numero3);

  // processamento 
  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;

  // saida 

  printf("a soma de %i + %i é igual a %i\n", numero1, numero2, soma);
  printf("a subtracao de %i - %i é igual a %i\n", numero1, numero2, subtracao);
  printf("a multiplicaçao de %i x %i é igual a %i\n", numero1, numero2, multiplicacao);
  printf("a divisao de %i / %f é igual a %f\n", numero1, numero2,divisao);
  getchar();
  printf(" o resto da divisão é %i %% = %i\n", numero1,numero2, resto_divisao);
  printf(" a fração de %i / %.2f é igual a %.2f\n", numero1, numero3, fracao);
  

  return 0;
}