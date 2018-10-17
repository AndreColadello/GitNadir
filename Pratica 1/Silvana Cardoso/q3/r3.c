#include <stdio.h>
#include "q3b.h"


int main()
{
    double w, x, y, z;
 char ch;
  printf("Digite uma funcao (+, *, /, mp): ");
 ch = getchar();

 switch(ch)
 {
 case '+':
    printf("Digite três números: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=soma(x, y, w);
    break;

case '*':
    printf("Digite três números: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=prod(x, y, w);
    break;

case 'm':
    printf("Média Ponderada. Os pesos são: 5 para n1, 3 para n2 e 2 para n3. Digite três números: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=m(x, y, w);
    break;

case '/':
    printf("Digite dois números: ");
    scanf("%lf %lf", &x, &y);
    if (y==0)
    printf ("Impossível dividir por 0.");

    else
    z=div(x, y);
    break;
default:
    printf("Erro! Operador inválido.");
 }
 printf("Resultado = %.2lf\n",z);
  return 0;

}
