// Exercicio 1 

#include <stdio.h>
#include <stdlib.h>

int main (){

	float Soma(float a, float b){
		return a+b;
	}
	float Mult(float a, float b, float c){
		return a*b*c;
	}
	float Div(float a, float b){
		if (b == 0){
			printf("ERRO! Divisão por zero.");
			exit(0);
		}
		return a/b;
	}
	float Pond(float a, float b, float c, float d, float e, float f){ // "d", "e" e "f" são os pesos
		return (a*d+b*e+c*f)/d+e+f; 
	}

	float a, b, c, d, e, f;

	printf("Digite os valores de a, b e c, alem dos pesos d, e, f para o calculo da medida ponderada.");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

	printf("Soma eh %f\n", Soma(a, b));
	printf("Multiplicacao eh %f\n", Mult(a,b,c));
	printf("Divisao eh %f\n", Div(a, b));
	printf("Media ponderada eh %f", Pond(a, b, c, d, e, f));
	return 0;
}

// Exercicio 2 

#include <stdio.h>
#include <stdlib.h>

int main(){

	void Mult1(float a){
		a = a+10;
		printf("%f\n", a);
	}
	void Mult2(float *a){
		*a = *a+10;
		printf("%f\n", *a); 
	}


	float p = 3.14;

	Mult1(p);
	printf("%f\n", p);
	Mult2(&p);
	printf("%f\n", p);


	return 0;
}

// Exercicio 3.1

float Soma(float a, float b){
		return a+b;
	}
	float Mult(float a, float b, float c){
		return a*b*c;
	}
	float Div(float a, float b){
		if (b == 0){
			printf("ERRO! Divisão por zero.");
			exit(0);
		}
		return a/b;
	}
	float Pond(float a, float b, float c, float d, float e, float f){ // "d", "e" e "f" são os pesos
		return (a*d+b*e+c*f)/d+e+f; 
	}

// Exercicio 3.2 

#include <stdio.h>
#include <stdlib.h>
#include "ExercZenith31.h"

int main(){

	float a, b, c, d, e, f;
	
	printf("Digite os valores de a, b e c, alem dos pesos d, e, f para o calculo da medida ponderada.");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

	printf("Soma eh %f\n", Soma(a, b));
	printf("Multiplicacao eh %f\n", Mult(a,b,c));
	printf("Divisao eh %f\n", Div(a, b));
	printf("Media ponderada eh %f", Pond(a, b, c, d, e, f));

	return 0;
}

// Exercicio 4 

#include <stdio.h>
#include <stdlib.h>
#include "ExercZenith31.h"

int main(){

	float a, b, c, d, e, f;
	FILE *arq; // criando um arquivo

	arq = fopen("resultado.txt","a");

	if(arq == NULL){
		printf("Erro na abertura do arquivo. ");
		return 0;
	}


	printf("Digite os valores de a, b e c, alem dos pesos d, e, f para o calculo da medida ponderada.");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

	fprintf(arq, "Soma: %f\n", Soma(a, b));
	fprintf(arq, "Multiplicacao: %f\n", Mult(a, b, c));
	fprintf(arq, "Divisao: %f\n", Div(a, b));
	fprintf(arq, "Media ponderada: %f\n", Pond(a, b, c, d, e, f));

	fclose(arq);

	printf("Soma eh %f\n", Soma(a, b));
	printf("Multiplicacao eh %f\n", Mult(a,b,c));
	printf("Divisao eh %f\n", Div(a, b));
	printf("Media ponderada eh %f", Pond(a, b, c, d, e, f));

	return 0;
}

// Exercicio 5

#include <stdio.h>
#include <stdlib.h>
#include "ExercZenith31.h"

int main(){

	float a, b, c, d, e, f;
	FILE *arq; // criando um arquivo

	arq = fopen("exercicio5.txt","r");

	if(arq == NULL){
		printf("Erro na abertura do arquivo. ");
		return 0;
	}

	fscanf(arq, "%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

	printf("Soma eh %f\n", Soma(a, b));
	printf("Multiplicacao eh %f\n", Mult(a,b,c));
	printf("Divisao eh %f\n", Div(a, b));
	printf("Media ponderada eh %f", Pond(a, b, c, d, e, f));

	fclose(arq);

	return 0;
}

// Exercicio 6

#include <stdio.h>
#include <stdlib.h>

int main(){

typedef struct {
	int modo_operacao;
	float valvula_ar;
	float tempo_abertura_valvula;
}Dados_Pacote;


void Imprime (Dados_Pacote Pack){
	printf("Modo de operacao: %i\nAbertura da valvula de vazao de ar: %f\nTempo de abertura da valvula de vazao de ar: %f", Pack.modo_operacao, Pack.valvula_ar, Pack.tempo_abertura_valvula);	
}

void Edit(Dados_Pacote* Pack){
	int a;
	float b, c;
	printf("\nDigite o novo valor do modo de operacao\n");
	scanf("%i", &a);
	printf("\nDigite o valor da abertura da valvula de ar: ");
	scanf("%f", &b);
	printf("\nDigite o tempo de abertura da valvula de ar: ");
	scanf("%f", &c);
	Pack->modo_operacao = a;
	Pack->valvula_ar = b;
	Pack->tempo_abertura_valvula = c;
}

	Dados_Pacote Pak;
	Pak.modo_operacao = 1;
	Pak.valvula_ar = 10.0;
	Pak.tempo_abertura_valvula = 15.0;

	Imprime(Pak);
	Edit(&Pak);
	printf("\nModo de operacao: %i\nAbertura da valvula de vazao de ar: %f\nTempo de abertura da valvula de vazão de ar: %f", Pak.modo_operacao, Pak.valvula_ar, Pak.tempo_abertura_valvula);

	return 0;
}

// Exercicio 7

#include <stdio.h>
#include <stdlib.h>

int main(){

typedef struct {
	int modo_operacao;
	float valvula_ar;
	float tempo_abertura_valvula;
}Dados_Pacote;


void Imprime (Dados_Pacote Pack){
	printf("Modo de operacao: %i\nAbertura da valvula de vazao de ar: %f\nTempo de abertura da valvula de vazao de ar: %f", Pack.modo_operacao, Pack.valvula_ar, Pack.tempo_abertura_valvula);	
}

void Edit(Dados_Pacote* Pack){
	int a;
	float b,c;
	printf("\nDigite o novo valor do modo de operacao\n");
	scanf("%i", &a);
	printf("\nDigite o valor da abertura da valvula de ar: ");
	scanf("%f", &b);
	printf("\nDigite o tempo de abertura da valvula de ar: ");
	scanf("%f", &c);
	Pack->modo_operacao = a;
	Pack->valvula_ar = b;
	Pack->tempo_abertura_valvula = c;
}

	Dados_Pacote Pak;
	Pak.modo_operacao = 1;
	Pak.valvula_ar = 10.0;
	Pak.tempo_abertura_valvula = 15.0;

	Imprime(Pak);
	Edit(&Pak);
	printf("\nModo de operacao: %i\nAbertura da valvula de vazao de ar: %f\nTempo de abertura da valvula de vazão de ar: %f\n", Pak.modo_operacao, Pak.valvula_ar, Pak.tempo_abertura_valvula);
	int *pont1;
	float*pont2;
	pont1 = &Pak.modo_operacao;
	printf("Endereço de modo de operacao: %i\n", pont1);
	pont2 = &Pak.valvula_ar;
	printf("Endereço da variavel de abertura da valvula de vazao de ar: %i\n", pont2);
	pont2 = &Pak.tempo_abertura_valvula;
	printf("Endereço da variavel de tempo de abertura da valvula de vazao de ar: %i", pont2);
	return 0;
}

// Exercicio 8

#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Digite 1 para escrever um novo arquivo\nDigite 2 para adicionar novos valores\nDigite 3 para mostrar os valores atuais\n");
	int n;
	scanf("%i", &n);
	if(n == 1){
		printf("Escrita de novo arquivo.");
	}
	if(n == 2){
		printf("Adicionar novos valores");
	}
	if(n == 3){
		printf("Mostrar os valores atuais");
	}
	if((n != 1) && (n != 2) && (n != 3)){
		printf("Erro! Tente novamente.");
	}

	return 0;
}

// Exercicio 9

#include <stdio.h>
#include <stdlib.h>

int main(){


typedef struct {
	int modo_operacao;
	float valvula_ar;
	float tempo_abertura_valvula;
}Dados_Pacote;


void Imprime (Dados_Pacote Pack){
	printf("Modo de operacao: %i\nAbertura da valvula de vazao de ar: %f\nTempo de abertura da valvula de vazao de ar: %f", Pack.modo_operacao, Pack.valvula_ar, Pack.tempo_abertura_valvula);	
}

void Edit(Dados_Pacote* Pack){
	int a;
	float b,c;
	printf("\nDigite o novo valor do modo de operacao\n");
	scanf("%i", &a);
	printf("\nDigite o valor da abertura da valvula de ar: ");
	scanf("%f", &b);
	printf("\nDigite o tempo de abertura da valvula de ar: ");
	scanf("%f", &c);
	Pack->modo_operacao = a;
	Pack->valvula_ar = b;
	Pack->tempo_abertura_valvula = c;
}

	Dados_Pacote Pak;
	Pak.modo_operacao = 1;
	Pak.valvula_ar = 10.0;
	Pak.tempo_abertura_valvula = 15.0;
	FILE* str;
	int numero;
	char texto[50];

	printf("Digite 1 para escrever no arquivo struct.txt\nDigite 2 para modificar os valores da struct\nDigite 3 para printar os valores atuais da struct");
	scanf("%i", &numero);
	if(numero == 1){
		printf("\nDigite o texto a ser escrito no arquivo. \n");
		str = fopen("struct.txt", "a");
		fflush(stdin);
		scanf("%[^\n]", texto);
		fprintf(str, "%s", texto);
	}
	if(numero == 2){
		Edit(&Pak);
	}
	if(numero == 3){
		Imprime(Pak);
	}
	if((numero != 1) && (numero!= 2) && (numero!=3)){
		printf("ERRO! Digito não relacionado a um estado.");
	}
	return 0;
} 
