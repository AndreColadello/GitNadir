/* This code will be used to show and write data in a struct

Author: Leonardo Baptistella  14/10/2018
*/
#include <stdio.h>
#include <stdlib.h>

struct controle{
	int op;
	float abt;
	float t_abt;
};

struct controle ct_ar;

int imp(struct controle nome);
int muda(struct controle *nome);

int main(void){
	int op=0;
	float res=0;
	char *cont="y";

	struct controle ct_ar;
	ct_ar.op=1;
	ct_ar.abt=10.00;
	ct_ar.t_abt=15.00;

	FILE *results; //pointer to file

	// a+ -> save data in the end of file, if file don't exists it will be created
	results = fopen("results.txt","a+");

	//if file does not open
	if (results == NULL){
    	printf("ERROR\n");
    	exit(0);
	}

	fprintf(results, "%d\n",ct_ar.op);
	fprintf(results, "%f\n",ct_ar.abt);
	fprintf(results, "%f\n",ct_ar.t_abt);

	while (cont == "y"){

		printf("[1](Write in a file)\n[2](Add new values)\n[3](View actual vallues)\nChoose an operation:");
		scanf("%d",&op);

		if (op==1){
			printf("(Write in a file):\n");
			fprintf(results, "%d\n",ct_ar.op);
			fprintf(results, "%f\n",ct_ar.abt);
			fprintf(results, "%f\n",ct_ar.t_abt);
		}
		if (op==2){
			printf("(Add new values):\n");
			muda(&ct_ar);
		}
		if (op==3){
			printf("(View actual vallues):\n");
			imp(ct_ar);
		}

		printf("(Continue?)y/n:\n");
		scanf("%c",&cont);

	}
	
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