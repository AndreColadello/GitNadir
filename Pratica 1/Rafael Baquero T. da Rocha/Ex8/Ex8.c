#include <stdio.h>
#include <stdlib.h>

void MostrarEstados(void);
int EscolherEstado(int estado);

int main() {
   int estado;
   MostrarEstados();
   estado = EscolherEstado(estado);
   return 0;
}

void MostrarEstados(void) {
   printf("\nEstados Disponiveis:\n");
   printf("\n  1. Escrever um arquivo;\n  2. Adicionar novos valores;\n  3. Mostrar valores atuais.\n");
   return;
}

int EscolherEstado(int estado) {
   int flag = 0;
   while(flag == 0){
      printf("\nInsira um novo estado: ");
      scanf("%d",&estado);
      switch(estado) {
         case 1:
            printf("\n1. Escrevendo um arquivo...\n");
            flag = 1;
            break;
         case 2:
            printf("\n2. Adicionando novos valores...\n");
            flag = 1;
            break;
         case 3:
            printf("\n3. Apresentando valores atuais...\n");
            flag = 1;
            break;
         default:
            printf("\nEntrada invalida.");
            MostrarEstados();
      }
   }
   return estado;
}
