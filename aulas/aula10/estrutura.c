#include <stdio.h>

int main () {
     struct contato_t {
      char nome[61];
      long int telefone;
      char email[61];
     };

     struct contato_t contato;

     printf("entre com um nome: ");
     scanf("%[^\n]s", contato.nome);
     while(getchar() !='\n');
     printf("entre com o telefone do contato: ");
     scanf("%li", &contato.telefone);
     while(getchar() != '\n');
     printf("entre com o email do contato: ");
     scanf("%[^\n]s", contato.email);
    while(getchar() != '\n');


    printf("dados do contato: ");
    printf("nome.......: %s\n", contato.nome);
    printf("telefone....: %li\n",contato.telefone);
    printf("email.......: %s\n",contato.email);


// para outro contato receber as mesmas informações do anterior  

    struct contato_t outro_contato;
    outro_contato = contato;

    printf("dados do contato: ");
    printf("nome.......: %s\n", contato.nome);
    printf("telefone....: %li\n",contato.telefone);
    printf("email.......: %s\n",contato.email);

    struct contato_t contatos[10];

    for (int k=0; k<10; k++) {
        contatos[k]=contato;
    }

    
    return 0;
}