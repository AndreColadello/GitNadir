/* This code will be used to view a execution state of a program. .

Author: Leonardo Baptistella  14/10/2018
*/
#include <stdio.h>

int main (void){
	int op=0;
	float res=0;
	char cont="y";
	
	while (cont == "y"){

		printf("[1](Write in a file)\n[2](Add new values)\n[3](View actual vallues)\nChoose an operation:");
		scanf("%d",&op);

		if (op==1){
			printf("(Write in a file):\n");
		}
		if (op==2){
			printf("(Add new values):\n");
		}
		if (op==3){
			printf("(View actual vallues):\n");
		}
	}
	
	return 0;
}