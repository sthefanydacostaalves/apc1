#include <stdio.h>
int main() { 
  float nota = 0.0f;

  printf("entre com uma nota de 0 e 10: ");
 int deu_certo = scanf("%f", &nota); 

  printf("você digitou: %f\n", nota);

  double pi= 0.0;
  printf("entre com o valor de pi: " );
  deu_certo = scanf("%lf", &pi);

  printf("você digitou: %.10f\n", pi);
    return 0;
}