#include <stdio.h>
int main () {
 
 int i =0;
 printf("entre com um numero entre 0 e 10: ");
scanf("%i",&i);

 for (int i=0; i<10; i++) {
   printf("%i",i);
}
for (int i=9; i>=0; i--) {
  printf("%i",i);
}
for (;;) {
  printf("ao infinito e alem/n");
}


    return 0 ;
} 