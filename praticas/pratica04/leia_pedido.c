#include <stdio.h>
int main() {
  
  char produto[21];
  int qtd=0;
  float valor=0.0f;

  printf("digite o nome do produto: ");
  scanf("%s", &produto);
  printf("digite a quantidade: "); 
  scanf("%i", &qtd);
  printf("digite o valor unitario: ");
  scanf("%f", &valor);
  printf("=====================================\n");
  printf("\t\t   P E D I D O  \n");
  printf("=====================================\n");
  printf("%s \t\t %s\t\t%s\n", "Produto", "Qtd", "valor unit");
  getchar();
  printf("%s \t\t  %03i \t \t \t %.2f\n", produto, qtd, valor);
  printf("=====================================\n");
  return 0;
}