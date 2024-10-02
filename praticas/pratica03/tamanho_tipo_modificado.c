#include <stdio.h>
int main() {

  printf ("o tipo short int ocupa %lu byte(s) na memoria.\n",sizeof(short int));
  printf ("o tipo long int ocupa %lu byte(s) na memoria.\n",sizeof(long int));
  printf ("o tipo long double ocupa %lu byte(s) na memoria.\n",sizeof(long double));
  return 0;
}