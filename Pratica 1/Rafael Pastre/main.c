#include <stdio.h>
#include <stdlib.h>
#include "media.h"

typedef struct{
    int modo_operacao;
    double abertura;
    double tempo;
}Pacote;

void print_pacote(Pacote p);
void fprint_pacote(Pacote p, FILE* fp);
void edit_pacote(Pacote* p);
void print_endereco_pacote(Pacote* p);

int main()
{
    FILE* fin;
    FILE* fout;
    double med, v1, v2, v3;

    FILE* fstruct;
    Pacote pacote;
    int estado = 0;

    fin = fopen("entradas.txt", "rt");
    fout = fopen("resultados.txt", "at");
    fstruct = fopen("struct.txt","at");

    //Exercicios 4 e 5
    fscanf(fin,"%lf", &v1);
    fscanf(fin,"%lf", &v2);
    fscanf(fin,"%lf", &v3);

    med = media(v1, v2, v3, 1, 2, 1.5);

    fprintf(fout,"%lf\n", med);

    //Exercícios 8 e 9
    while(estado != -1){
        switch(estado){
        case 0:
            do{
                printf("Digite o proximo estado do programa (1-3):");
                scanf("%d", &estado);
            }while(estado < -1 || estado > 3);
            break;

        case 1:
            printf("1.Escrever em arquivo\n");
            fprint_pacote(pacote, fstruct);
            estado = 0;
            break;

        case 2:
            printf("2.Adicionar novos valores\n");
            edit_pacote(&pacote);
            estado = 0;
            break;

        case 3:
            printf("3.Mostrar valores atuais\n");
            print_pacote(pacote);
            printf("Enderecos: ");
            print_endereco_pacote(&pacote);
            estado = 0;
            break;
        }
    }

}

//Exercicios 6 e 7
void print_pacote(Pacote p){
    printf("Modo de operacao: %d\n", p.modo_operacao);
    printf("Abertura da valvula: %lf\n", p.abertura);
    printf("Tempo de abertura: %lf\n", p.tempo);
}

void fprint_pacote(Pacote p, FILE* fp){
    fprintf(fp, "Modo de operacao: %d\n", p.modo_operacao);
    fprintf(fp, "Abertura da valvula: %lf\n", p.abertura);
    fprintf(fp, "Tempo de abertura: %lf\n", p.tempo);
}

void edit_pacote(Pacote* p){
    printf("Digite o modo de operacao:");
    scanf("%d",&(p->modo_operacao));
    printf("Digite a abertura:");
    scanf("%lf",&(p->abertura));
    printf("Digite o tempo:");
    scanf("%lf",&(p->tempo));
}

void print_endereco_pacote(Pacote* p){
    printf("%p %p %p\n",&(p->modo_operacao),&(p->abertura), &(p->tempo));
}
