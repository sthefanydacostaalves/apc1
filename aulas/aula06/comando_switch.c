#include <stdio.h>

int main() {
    int nota=0;

    printf("entre com uma nota de 1 a 5: ");
    scanf("%i",&nota);

    // if (nota==1) {
    //     printf("voce ganhou uma estrela!\n");
    // } else if (nota==2) {
    //     printf("voce ganhou duas estrelas!\n");
    // } else if (nota==3) {
    //     printf("voce ganhou tres estrelas!\n");
    // } else if (nota==4){
    //     printf("voce ganhou quatro estrelas!\n");
    // } else if (nota==5) {
    //     printf("voce ganhou cinco estrelas!\n");
    // } else {
    //     printf("Nota invalida!\n");
    // }

    switch (nota){
        case 1: printf("voce ganhou uma estrela!\n");
        break;

        case 2: printf("voce ganhou duas estrelas!\n");
        break;

        case 3: printf("voce ganhou tres estrelas!\n");
        break;

        case 4: printf("voce ganhou quatro estrelas!\n");
        break;

        case 5: printf("voce ganhou cinco estrelas!\n");
        break;

        default: printf("Nota invalida!\n");
    }
printf("-------------------\n"); 
printf("  MENU PRINCIPAL   \n");
printf("-------------------\n");   
printf("1-consulta saldo\n");
printf("2-recarregar saldo\n");
printf("3-ver ligacoes\n");
printf("5-sair\n");
printf("entre com uma opcao =>");

int opcao=0;
scanf("%i",&opcao);

switch (opcao) {
    case 1: printf("seu saldo eh R$ 10.00\n");
    break;

    case 2: printf("escolha um valor de recarga\n ");
    break;
    
    case 3: printf("voce tem quatro recados\n");
    break;

    case 4: printf("voce ligou 5 vezes\n");
    break;
    
    case 5: printf("ate logo\n");
    break;
    default: printf("opcao invalida\n");
    }


    return 0;
}