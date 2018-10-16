#include <stdio.h>
#include <stdlib.h>


typedef struct {
   float modo_de_operacao;
   float abertura_valvula;
   float tempo_valvula;
}tipoPacote;

void Imprime(tipoPacote p);   // Utiliza passagem por valor
void Atualiza(tipoPacote *p); // Utiliza passagem por referencia
void Endereco_Valor(tipoPacote *p); // Utiliza passagem por referencia

int main() {
   tipoPacote Pacote;
   Pacote.modo_de_operacao = 1;
   Pacote.abertura_valvula = 10;
   Pacote.tempo_valvula = 15;
   printf("\nValores padrao:\n");
   printf("Modo = %f;\nAbertura em t = %fs;\nTempo de abertura = %f s.\n",Pacote.modo_de_operacao,Pacote.abertura_valvula,Pacote.tempo_valvula);
//-----------------------
   Atualiza(&Pacote);
   Imprime(Pacote);
   Endereco_Valor(&Pacote);
   return 0;
}

void Imprime(tipoPacote p) {
   printf("\nValores Atuais:\n");
   printf("\n --> Modo = %f;",p.modo_de_operacao);
   printf("\n --> Abertura da valvula em t = %f s;",p.abertura_valvula);
   printf("\n --> Tempo de abertura da valvula = %f s.\n",p.tempo_valvula);
   return;
}

void Atualiza(tipoPacote* p) {
   printf("\nDigite os novos valores para:\n");
   printf("Modo de Operacao: ");
   scanf("%f",&p->modo_de_operacao);
   printf("Abertura da valvula de vazao de ar: ");
   scanf("%f",&p->abertura_valvula);
   printf("Tempo de abertura da valvula de vazao de ar: ");
   scanf("%f",&p->tempo_valvula);
//-----------------------
   printf("\nValores atualizados:\n");
   printf("\n - Modo = %f;",p->modo_de_operacao);
   printf("\n - Abertura da valvula em t = %f s;",p->abertura_valvula);
   printf("\n - Tempo de abertura da valvula = %f s.\n",p->tempo_valvula);
   return;
}

void Endereco_Valor(tipoPacote* p) {
   printf("\nEnderecos e valores das variaveis atuais:\n");
   //-----------------------
   printf("\nModo de operacao:");
   printf("\n - Endereco = %p\n - Valor = %f\n",&p->modo_de_operacao,p->modo_de_operacao);
   //-----------------------
   printf("\nAbertura da valvula de vazao de ar:");
   printf("\n - Endereco = %p\n - Valor = %f\n",&p->abertura_valvula,p->abertura_valvula);
   //-----------------------
   printf("\nTempo de abertura da valvula:");
   printf("\n - Endereco = %p\n - Valor = %f\n",&p->tempo_valvula,p->tempo_valvula);
   //-----------------------
   return;
}
