#include <stdio.h>
int main() {

int numero1  =0;
int numero2  =0; 
float numero3 =0.0f;
int soma = 0;
int subtracao = 0;
int multiplicacao = 0;
int  divisao= 0.0;
int resto_divisao = 0;
float divisao_fracionada=0.0f;

printf("digite um numero inteiro: ");
scanf("%i", &numero1);
printf("digite outro numero inteiro: ");
scanf("%i", &numero2);
printf("digite um numero flutuante: ");
scanf("%f", &numero3);
  getchar();
soma = numero1 + numero2;
printf("a soma de %i + %i é igual a %i\n", numero1, numero2, soma);
printf("a subtração de %i - %i é igual a %i\n", numero1, numero2, numero1-numero2);
printf("a multiplicação de %i x %i é igual a %i\n", numero1, numero2, numero1*numero2);
printf("a divisão de %i / %i é igual a %i\n", numero1,numero2, numero1/numero2);
printf("o resto da divisão de %i / %i é igual a %i\n",numero1,numero2, numero1%numero2);
printf("a divisão fracionada de %i / %.2f é igual a %.2f\n",numero1,numero3, numero1/numero3);
  

  
  return 0;
}