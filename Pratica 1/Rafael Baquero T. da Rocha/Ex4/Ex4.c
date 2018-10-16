#include "Ex3.h"

int main() {
   FILE* fp;
   fp = fopen("resultados.txt","a");
// -------------
   float a,b,c;
   float resultado1, resultado2, resultado3, resultado4;
   printf("\nInsira os valores dos termos a, b e c:\n");
   scanf("%f %f %f", &a, &b, &c);
   printf("\na = %f;\nb = %f;\nc = %f.\n", a, b, c);
   resultado1 = soma3(a,b,c);
   resultado2 = prod3(a,b,c);
   resultado3 = divide(a,b);
   resultado4 = mp3(a,b,c);
// -------------
   fprintf(fp,"\nr1 = %f;\nr2 = %f;\nr3 = %f;\nr4 = %f.\n", resultado1, resultado2, resultado3, resultado4);
   fclose(fp);
   return 0;
}
