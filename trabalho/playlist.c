#include <stdio.h>
int main() {

struct playlist_t{                            // usar do while :) 
    char musica [30];
    char estilo [30];

};
struct playlist_t playlist;
int opcao=0;


// do {
printf(" P L A Y L I S T ");
printf("para adicionar musica digite.... 1");
printf("para ver sua playlist digite... 2 ");
printf("para sair digite...3");
printf("digite a sua opcao:  ");
scanf("%i",&opcao);
//   getchar();
//           switch (opcao) {
//             case 1: printf("digite o nome da musica: ");
//                     scanf("%s",playlist.musica);
//                     printf("digite o genero da musica:  ");
//                     scanf("%s",playlist.estilo);        
//             case 2 : printf()}



    return 0;
}