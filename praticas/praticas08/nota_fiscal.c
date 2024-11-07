#include <stdio.h>
int main (){
float total =0.0f;
float nota [5][3];

for (int i=0; i<5; i++) {
    printf("valor do %io. produto: ", i+1);
    scanf("%f",&nota [i][0]);
    printf("quantidade do %i.o produtos: ", i+1);
    scanf("%f", &nota[i][1]);
    nota[i][2]=nota[i][0] * nota[i][1];
    total= total + nota[i][2];

}
for (int i =0; i<5; i++) {
    for (int j=0; j<3; j++) {
        printf("%.2f ", nota[i][j]);
    }
}
printf("\n");
printf("%.2f", total);


    return 0;
}