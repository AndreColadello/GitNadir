#include <stdio.h>
#include <stdlib.h>

typedef struct {
   float modo_de_operacao;
   float abertura_valvula;
   float tempo_valvula;
}tipoPacote;

void Imprime(tipoPacote p);   // Utiliza passagem por valor (trabalha com copias; nao atualiza variaveis principais)
void Atualiza(tipoPacote *p); // Utiliza passagem por referencia
void Endereco_Valor(tipoPacote *p); // Utiliza passagem por referencia
void MostrarEstados(void);
int EscolherEstado(int estado);
void ExecutarTarefa(int estado, tipoPacote* p);
void Escreve_txt(tipoPacote* p);

int main() {
   tipoPacote Pacote;
   Pacote.modo_de_operacao = 1;
   Pacote.abertura_valvula = 10;
   Pacote.tempo_valvula = 15;
   int estado;
   printf("\n===> Maquina de Estados Inicializada <===\n");
   printf("\nValores padrao:\n");
   printf("Modo = %f;\nAbertura em t = %fs;\nTempo de abertura = %f s.\n",Pacote.modo_de_operacao,Pacote.abertura_valvula,Pacote.tempo_valvula);
//-----------------------
   int sair = 1;
   while(sair == 1) {
      MostrarEstados();
      estado = EscolherEstado(estado);
      ExecutarTarefa(estado,&Pacote);
      printf("\nDeseja inserir um novo estado? \n0 - NAO\n1 - SIM\n");
      printf("Sua escolha: ");
      scanf("%d",&sair);
   }
   printf("\nPrograma finalizado.\n");
   return 0;
}

void Imprime(tipoPacote p) {
   printf("\n --> Modo de Operacao = %f;",p.modo_de_operacao);
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

void ExecutarTarefa(int estado, tipoPacote* p) {
   switch(estado) {
      case 1:
         Escreve_txt(p);
         break;
      case 2:
         Atualiza(p);
         break;
      case 3:
         Imprime(*p);      // Duvida: por que aqui o argumento é *p e antes era p?
         break;
   }
   return;
}

void Escreve_txt(tipoPacote* p) {
   FILE* fp;
   fp = fopen("struct.txt","w");
   //-----------------------
   fprintf(fp,"\nValores atuais:\n");
   fprintf(fp,"\n - Modo = %f;",p->modo_de_operacao);
   fprintf(fp,"\n - Abertura da valvula em t = %f s;",p->abertura_valvula);
   fprintf(fp,"\n - Tempo de abertura da valvula = %f s.\n",p->tempo_valvula);
   //-----------------------
   fclose(fp);
   printf("... Escrita concluida.\n");
   return;
}
