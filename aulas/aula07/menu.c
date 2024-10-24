#include <stdio.h>
#include <stdlib.h>

int main () {

    int opcao=0;

    while (opcao !=5){
        system ("clear");
        printf("menu principal\n");
        printf("1 - consultar saldo\n");
        printf("2 - fazer recarrega\n");
        printf("3 - ver recados \n");
        printf("4 - ultimas ligacoes\n");
        printf("5 - sair\n");
        printf("entre com uma opcao =>  ");
        scanf("%i",&opcao);
        while (getchar () != '\n');

        switch(opcao) {
            case 1 : {
                system("clear");
                printf("consulta de saldo\n\n");
                printf("seu saldo eh de 20 reais\n"); break;
         }
            case 2 : printf("escolha um valor de recarga:\n"); break;
            case 3 : printf("voce naum possui recardos.\n"); break;
            case 4 : printf("99999-7777\n93591-0990\n"); break;
            case 5: printf("ate logo!\n"); break;
            default: printf("opcao invalida. Tente novamente!\n"); 


        }
        if (opcao !=5) {
            opcao=0;
            printf("digite ENTER para continuar...\n");
            getchar();

        }

        }
    return 0;
}