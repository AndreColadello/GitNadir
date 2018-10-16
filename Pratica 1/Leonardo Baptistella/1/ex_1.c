/* This code will be used to calculate the sum, multiplication, division and average for real numbers.

Author: Leonardo Baptistella  10/10/2018
*/

#include <stdio.h>

//vector
float num[2];
float pesos[2];

//functions
float soma(float *num);
float mult(float *num);
float div(float *num);
float med(float *num, float *pesos);
float ins_v3(float *num); //used to insert three values on vector
float ins_v2(float *num); //used to insert two values on vector
float ins_p(float *pesos); //used to insert three values on vector

int main (void){
	int op=0;
	float res=0;

	printf("[1](Sum)\n[2](Multiplication)\n[3](Division)\n[4](Average)\nChoose an operation:");
	scanf("%d",&op);

	if (op==1){
		ins_v3(num);
		res=soma(num);
		printf("Result: %f\n",res);
	}
	if (op==2){
		ins_v3(num);
		res=mult(num);
		printf("Result: %f\n",res);
	}
	if (op==3){
		ins_v2(num);
		res=div(num);
		printf("Result: %f\n",res);
	}
	if (op==4){
		ins_v3(num);
		ins_p(pesos);
		res=med(num,pesos);
		printf("Result: %f\n",res);
	}

	return 0;
}

//this function insert three values on vector
float ins_v3 (float *num){
	for (int i = 0; i < 3; i++){
		printf("Insert a number: ");
		scanf("%f",&num[i]);
	}
}

//this function insert three weights on vector
float ins_p (float *pesos){
	for (int i = 0; i < 3; i++){
		printf("Insert a weight: ");
		scanf("%f",&pesos[i]);
	}
}

//this function insert two values on vector
float ins_v2 (float *num){
	for (int i = 0; i < 2; i++){
		printf("Insert a number: ");
		scanf("%f",&num[i]);
	}
}

//this function return the sum of three numbers
float soma(float *n){
	return (num[0]+num[1]+num[2]);
}

//this function return the multiplication of three numbers
float mult(float *n){
	return ((num[0])*(num[1])*(num[2]));
}

//this function return the division of two numbers
float div(float *n){
	if (n[1] != 0){
		return (num[0]/num[1]);
	}else{
		printf("Does not exist!!!\n");
		return(0);
	}
}

//this function return the poderated average of three numbers
float med(float *num,  float *pesos){
	float sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		printf("peso %f\n",pesos[i] );printf("num %f\n",num[i] );
	}
	return (((num[0]*(pesos[0]))+(num[1]*(pesos[1]))+(num[2]*(pesos[2])))/(pesos[0]+pesos[1]+pesos[2]));
}





