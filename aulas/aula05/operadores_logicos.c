#include <stdio.h>
int main() {

  // E logico
  int p=0;
  int q=0;
  printf("%i E %i = %i\n", p, q, p && q);
  q=1;
  printf("%i E %i = %i\n", p, q, p && q);
  p=1;
  q=0;
  printf("%i E %i = %i\n", p,q,p && q);
  q=1;
  printf("%i E %i = %i\n", p,q,p && q);
  
  //1<X>10
  // 1< X && X <10  
  
  // OU logico
  p=0;
  q=0;
  printf("%i OU %i = %i\n", p, q, p || q);
  q=1;
  printf("%i OU %i = %i\n", p, q, p || q);
  p=1;
  q=0;
  printf("%i OU %i = %i\n", p,q,p || q);
  q=1;
  printf("%i OU %i = %i\n", p,q,p || q);
  

  // NAO logico
  p=0;
  printf("NÃO %i = %i\n", p, !p);
  printf("NÃO %i = %i\n", q, !q);
  
  
  return 0;
}