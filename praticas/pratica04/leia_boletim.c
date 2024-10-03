#include <stdio.h> 
int main() {

double matricula = 0;
float a1=0.0;
float a2=0.0;
float media =0.0;

printf("Digite sua matricula: ");
scanf("%lf", &matricula);
getchar();
printf("Digite sua nota A1: ");
scanf("%f", &a1);
getchar();
printf("Digite sua nota A2: ");
scanf("%f", &a2);
getchar();
media = (a1 + a2) / 2;
printf("%s \t %s \t %s \t %s\n", "matricula", "A1", "A2", "Media");
printf("%.0lf\t %.1f \t %.1f \t %.1f\n", matricula,a1,a2,media);
 
  return 0;
}