#include "Ex3.h"

int main() {
   FILE* fp_entrada;
   fp_entrada = fopen("entradas.txt","r");
   FILE* fp_saida;
   fp_saida = fopen("resultados.txt","a");
// -------------
   float a,b,c;
   float resultado1, resultado2, resultado3;
   //printf("\nInsira os valores dos termos a, b e c:\n");
   fscanf(fp_entrada,"%f %f %f", &a, &b, &c);
   //printf("\na = %f;\nb = %f;\nc = %f.\n", a, b, c);
   resultado1 = soma3(a,b,c);
   resultado2 = prod3(a,b,c);
   resultado3 = divide(a,b);
   //resultado4 = mp3(a,b,c); problema: mudança de scanf para fscanf no header Ex3.h
// -------------
   fprintf(fp_saida,"\nr1 = %f;\nr2 = %f;\nr3 = %f.\n", resultado1, resultado2, resultado3);
   fclose(fp_entrada);
   fclose(fp_saida);
   return 0;
}
