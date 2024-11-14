#include <stdio.h>
int main () {
    float notas[10];
    float soma=0.0f;
    float media = 0.0f;
    int qtd_acima_media = 0;

    for (int i=0; i<10; i++) {
        scanf("%f",&notas[i]);
        soma = soma + notas [i];
    }

media = soma / 10;
 
 for (int i =0; i<10; i++) {
     if (notas[i]>media){
        qtd_acima_media++;
     }
 }
 printf("a media dos alunos foi %.2f\n",media);
 printf("%i alunos tiraram notas acima da media\n", qtd_acima_media);



    return 0;
}