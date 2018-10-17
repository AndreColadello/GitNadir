/* This code will be used to show and write data in a struct

Author: Leonardo Baptistella  14/10/2018
*/
#include <stdio.h>

struct controle{
	int op;
	float abt;
	float t_abt;
};

struct controle ct_ar;

int imp(struct controle nome);
int muda(struct controle *nome);

int main(void){
	struct controle ct_ar;
	ct_ar.op=1;
	ct_ar.abt=10.00;
	ct_ar.t_abt=15.00;

	imp(ct_ar);

	muda(&ct_ar);

	imp(ct_ar);
	return 0;
}

int imp(struct controle nome){
	printf("\nMode:%d\n",nome.op);
	printf("Open:%f\n",nome.abt);
	printf("Open time:%f\n",nome.t_abt);

	return 0;
}

int muda(struct controle *nome){
	int a=0;
	float a1=0;

	printf("\nInsert new values is struct:\nMode:");
	scanf("%d",&a);
	(*nome).op = a;

	printf("Open: ");
	scanf("%f",&a1);
	(*nome).abt = a1;

	printf("Open time:");
	scanf("%f",&a1);
	(*nome).t_abt = a1;

	return 0;
}