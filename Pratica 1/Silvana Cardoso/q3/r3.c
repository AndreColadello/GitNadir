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
    printf("Digite tr�s n�meros: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=soma(x, y, w);
    break;

case '*':
    printf("Digite tr�s n�meros: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=prod(x, y, w);
    break;

case 'm':
    printf("M�dia Ponderada. Os pesos s�o: 5 para n1, 3 para n2 e 2 para n3. Digite tr�s n�meros: ");
    scanf("%lf %lf %lf", &x, &y, &w);
    z=m(x, y, w);
    break;

case '/':
    printf("Digite dois n�meros: ");
    scanf("%lf %lf", &x, &y);
    if (y==0)
    printf ("Imposs�vel dividir por 0.");

    else
    z=div(x, y);
    break;
default:
    printf("Erro! Operador inv�lido.");
 }
 printf("Resultado = %.2lf\n",z);
  return 0;

}
