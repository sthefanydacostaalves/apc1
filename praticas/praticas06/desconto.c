#include <stdio.h>
int main () {

float bruto = 0.0;
float desconto = 0.0;

printf("digite o valor bruto do produto");
scanf("%f", &bruto);
if (bruto<= 100.00f) {
    desconto= bruto*0.01f;
} 
else if ( bruto<= 500.0f) {
    desconto = bruto*0.05f;
}
else if (desconto=bruto*0.1f);

printf("%.2f,%.2f", bruto, desconto);




    return 0;
}