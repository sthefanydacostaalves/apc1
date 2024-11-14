#include <stdio.h>

int main () {

char frase [31];

printf("entre com uma frase: ");
scanf("%s",frase);

char matriz [6][5];
int k = 0;

for (int i=0; i<6; i++) {
    for ( int j=0; j<5; j++)  {
    matriz [i][j] = k;
    k ++;
} 
}
 printf("A trasposicao da frase eh:  ");

 for (int j =0; j<5; j++){
    for (int i =0; i<6; i++){
        printf("%s, %s", matriz [i][j]);
    }
 }




    return 0;
}