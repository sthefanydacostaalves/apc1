#include <stdio.h>
#include <string.h>
int main () {

    char primeiro_nome [20];
    printf("entre com o seu primeiro nome: ");
    scanf("%s",primeiro_nome);

    char ultimo_nome [20];
     printf("entre com seu ultimo nome: ");
     scanf("%s",ultimo_nome);



    char nome [40];
  strcpy(nome, primeiro_nome);
 strcpy(nome, " ");
  strcpy(nome,ultimo_nome);

  printf("seu nome eh '%s'\n", nome);

  if (strcmp(primeiro_nome, ultimo_nome)<0) {
    printf(" a ordem eh %s %s", ultimo_nome);
  } else {
    printf("a ordem eh %s %s", ultimo_nome, primeiro_nome);
  }
// quantos caracteres tem na string
printf("o nome '%s' tem %i caracteres\n", nome, strlen(nome));


// procurar pelo nome silva
if (strstr(nome,"silva")) {
    printf("sou da familia silva\n");
}
else {
    printf("nao sou da familia silva\n");
}

// preencher uma string

memset(nome,'a',10);
printf("seu  nome eh '%s' \n", nome);
memset(nome,'b',20);
printf("seu nome eh '%s'\n", nome);
memset(nome,0,sizeof(nome));
printf("seu nome eh '%s'\n",nome);

    return 0;
}