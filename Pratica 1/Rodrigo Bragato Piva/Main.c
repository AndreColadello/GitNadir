//Ex 1

/*
float soma(float a,float b,float c){
	return a+b+c;
}

float prod(float a,float b,float c){
	return a*b*c;
}

float div(float a,float b){
	return a/b;
}

float pond(float a,float b,float c,float p_a,float p_b,float p_c){
	return ((a*p_a)+(b*p_b)+(c*p_c))/(p_a+p_b+p_c);
}


int main(){
	return 0;
} */



/*---------------------------------------------------------------------------------------*/
//Ex 2

/*
#include <stdio.h>
#define PI 3,141596

void prod_pi(float a){
	a*=PI;
	printf("Var na func:%f\n",a);
}


int main(){
	float a;
	printf("Valor a ser multiplicado:\n");
	scanf("%f",&a);
	prod_pi(a);
	printf("Var ext:%f\n",a);
}*/



/*---------------------------------------------------------------------------------------*/
//Ex 3

//--------.h--------//

/*
#include <stdio.h>
#define PI 3.14159265359

float prod_pi(float a);

float soma(float a,float b,float c);

float prod(float a,float b,float c);

float div(float a,float b);

float pond(float a,float b,float c,float p_a,float p_b,float p_c);
*/

//--------.C--------//

/*
#include "imp.h"

float soma(float a,float b,float c){
	return a+b+c;
}

float prod(float a,float b,float c){
	return a*b*c;
}

float div(float a,float b){
	return a/b;
}

float pond(float a,float b,float c,float p_a,float p_b,float p_c){
	return ((a*p_a)+(b*p_b)+(c*p_c))/(p_a+p_b+p_c);
}

void prod_pi(float a){
	a*=PI;
	printf("Var na func:%f\n",a);
}


int main(){
	float a;
	printf("Valor a ser multiplicado:\n");
	scanf("%f",&a);
	prod_pi(a);
	printf("Var ext:%f\n",a);
}
*/



/*---------------------------------------------------------------------------------------*/
//Ex 4

/*
#include "imp.h"

float soma(float a,float b,float c){
	return a+b+c;
}

float prod(float a,float b,float c){
	return a*b*c;
}

float div(float a,float b){
	return a/b;
}

float pond(float a,float b,float c,float p_a,float p_b,float p_c){
	return ((a*p_a)+(b*p_b)+(c*p_c))/(p_a+p_b+p_c);
}

float prod_pi(float a){
	a*=PI;
	return a;
}

int main(){
	FILE *arq;
	arq=fopen("resultados.txt","a+");
	fprintf(arq,"\n");
	float a,b,c;
	float p_a,p_b,p_c;

	printf("Valores para a soma, multiplicacao e ponderada:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("Pesos:");
	scanf("%f",&p_a);
	scanf("%f",&p_b);
	scanf("%f",&p_c);
	fprintf(arq,"Soma:%f\n",soma(a,b,c));
	fprintf(arq,"Produto:%f\n",prod(a,b,c));
	fprintf(arq,"Divisao:%f\n",div(a,b));
	fprintf(arq,"Ponderada:%f\n",pond(a,b,c,p_a,p_b,p_c));
	fprintf(arq,"Var int:%f\nVar ext:%f\n",prod_pi(a),a);
}
*/



/*---------------------------------------------------------------------------------------*/
//Ex 5

/*
#include "imp.h"

float soma(float a,float b,float c){
	return a+b+c;
}

float prod(float a,float b,float c){
	return a*b*c;
}

float div(float a,float b){
	return a/b;
}

float pond(float a,float b,float c,float p_a,float p_b,float p_c){
	return ((a*p_a)+(b*p_b)+(c*p_c))/(p_a+p_b+p_c);
}

float prod_pi(float a){
	a*=PI;
	return a;
}

int main(){
	FILE *arq_in,*arq_out;
	arq_out=fopen("resultados.txt","a+");
	fprintf(arq_out,"\n");
	arq_in=fopen("entradas.txt","r");
	
	float a,b,c;
	float p_a,p_b,p_c;

	fscanf(arq_in,"%f",&a);
	fscanf(arq_in,"%f",&b);
	fscanf(arq_in,"%f",&c);
	
	fscanf(arq_in,"%f",&p_a);
	fscanf(arq_in,"%f",&p_b);
	fscanf(arq_in,"%f",&p_c);
	
	fprintf(arq_out,"Soma:%f\n",soma(a,b,c));
	fprintf(arq_out,"Produto:%f\n",prod(a,b,c));
	fprintf(arq_out,"Divisao:%f\n",div(a,b));
	fprintf(arq_out,"Ponderada:%f\n",pond(a,b,c,p_a,p_b,p_c));
	fprintf(arq_out,"Var int:%f\nVar ext:%f\n",prod_pi(a),a);
}
*/


/*---------------------------------------------------------------------------------------*/
//Ex 6
/*
#include <stdio.h>

typedef struct {
	int mode;
	float abert;
	float time;
}data;

void print(data pacote){
	printf("Modo de operacao = %d\n",pacote.mode);
	printf("Abertura da valvula de vazao de ar = %f\n",pacote.abert);
	printf("Tempo de abertura da valvula de vazao de ar = %f\n",pacote.time);
}

void edit(data *ptr){
	printf("Modo de operacao:\n");
	scanf("%d",&(*ptr).mode);
	printf("Abertura da valvula de vazao de ar:\n");
	scanf("%f",&(*ptr).abert);
	printf("Tempo de abertura da valvula de vazao de ar:\n");
	scanf("%f",&(*ptr).time);
}

int main(){
	data pacote;
	pacote.mode=1;
	pacote.abert=10;
	pacote.time=15;
	print(pacote);
	edit(&pacote);
	print(pacote);
	return 0;
}
*/


/*---------------------------------------------------------------------------------------*/
//Ex 7
/*
#include <stdio.h>

typedef struct {
	int mode;
	float abert;
	float time;
}data;

void print(data pacote){
	printf("Modo de operacao = %d\n",pacote.mode);
	printf("Abertura da valvula de vazao de ar = %f\n",pacote.abert);
	printf("Tempo de abertura da valvula de vazao de ar = %f\n",pacote.time);
}

void print_all(data *ptr){
	printf("Endereco:%p\n",ptr);
	print(*ptr);
}

void edit(data *ptr){
	printf("Modo de operacao:\n");
	scanf("%d",&(*ptr).mode);
	printf("Abertura da valvula de vazao de ar:\n");
	scanf("%f",&(*ptr).abert);
	printf("Tempo de abertura da valvula de vazao de ar:\n");
	scanf("%f",&(*ptr).time);
}

int main(){
	data pacote;
	pacote.mode=1;
	pacote.abert=10;
	pacote.time=15;
	print(pacote);
	edit(&pacote);
	print_all(&pacote);
	return 0;
}
*/