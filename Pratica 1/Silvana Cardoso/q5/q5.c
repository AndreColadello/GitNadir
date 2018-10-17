#include <stdio.h>
#include "q3b.h"


int main()
{
    FILE *arq;
    FILE *ent;
    double w, x, y, z;
    char ch;
    char texto[20];
    int result;

    arq = fopen("resultados.txt", "a");
    ent = fopen("entradas.txt", "r");

    if (ent==NULL){
        printf("Problemas na ABERTURA do arquivo de ENTRADA\n");
        system ("pause");
        exit(1);
    }
        fscanf(ent, " %lf %lf %lf", &x, &y, &w);
        printf("n1: %lf\n n2: %lf\n n3:%lf\n", x, y, w);

 printf("Digite uma funcao (+, *, /, mp): ");
 ch = getchar();

 switch(ch)
 {
 case '+':

    z=soma(x, y, w);
    fclose(ent);
    break;

case '*':
    z=prod(x, y, w);
    fclose(ent);
    break;

case 'm':
    z=m(x, y, w);
    fclose(ent);
    break;

case '/':
    if (y==0){
    printf ("Impossível dividir por 0.");
    fclose(ent);
    }else {
    z=div(x, y);
    fclose(ent);}
    break;
default:
    printf("Erro! Operador inválido.");
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
