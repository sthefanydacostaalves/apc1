#include <stdio.h>
int main () {

const int DOMINGO = 1;
const int SEGUNDA = 2;
const int TERCA = 3;
const int QUARTA = 4;
const int QUINTA = 5;
const int SEXTA = 6;
const int SABADO = 7;

enum dia_da_semana_e {
    dom =1, // n é obrigado atribuir valor 
    seg,
    ter,
    qua,
    qui,
    sex,
    sab
};


 enum boolean {false,true};

int dia;
printf("entre com o dia da semana: ");
scanf("%i",&dia);

switch(dia) {
    case dom: printf("domingo\n"); break;
    case seg: printf("segunda\n"); break;
    case ter: printf("terca\n"); break;
    case qua: printf("quarta\n"); break;
    case qui: printf("quinta\n"); break;
    case sex: printf("sexta\n"); break;
    case sab: printf("sabado\n"); break;
    default: printf("dia invalidp\n");
}
    return 0;
}