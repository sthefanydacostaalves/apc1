#include <stdio.h>
int main() {
char tecla = '\0'; // caracter nulo

  printf("digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); // limpa o buffer do teclado que é o \n 
  printf("você digitou: %c\n", tecla);

  printf("digite uma tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar(); // limpa o buffer do teclado que é o \n
  printf("você digitou: %c\n", tecla);
 

  char nome[31];
  printf("digite seu nome: ");
  deu_certo = scanf("%[^\n]s",nome);
  printf("ola %s\n", nome);
    
    return 0;
    }