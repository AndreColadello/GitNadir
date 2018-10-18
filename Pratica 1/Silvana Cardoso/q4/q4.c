#include <stdio.h>
#include "q3b.h"


int main()
{
    double w, x, y, z;
 char ch;
    FILE *arq;
    int result;
    arq = fopen("resultados.txt", "a");
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

 if (arq==NULL){
        printf("Problemas na ABERTURA do arquivo\n");
        system ("pause");
        exit(1);
    }
    result = fprintf(arq, "Resultado: %.2lf\n", z);
    if (result<0)
        printf("Erro na escrita\n");

    fclose(arq);
 return 0;

}
