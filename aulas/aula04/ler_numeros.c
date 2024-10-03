#include <stdio.h>
//deixar a variavel =0

int main() {
  int numero = 0;

  printf("entre com o numero:");
  int deu_certo = scanf("%i", &numero);
  printf("você digitou; %i\n", numero);
  printf("a leitura deu certo? %i\n", deu_certo);

  int coord_x=0;
  int coord_y=0;
printf("entre com as coordenadas de um ponto: ");
deu_certo = scanf("%i %i", &coord_x, &coord_y);
  
printf("você digitou; %i, %i\n", coord_x, coord_y); 
  
  return 0;
}