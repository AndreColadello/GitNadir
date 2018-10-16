/* This code will be used to see difference between passage for value and reference.

Author: Leonardo Baptistella  11/10/2018                                                           */

#include <stdio.h>

float mult_v(float num);
float mult_p(float *num);

int main(void){
	float num=0,res=0;

	printf("Insert a number: ");
	scanf("%f",&num);

	res=mult_v(num); //passage for value
	printf("\nInsert: %f\nResult used a value: %f",num,res);

	res=mult_p(&num);//passage for reference
	printf("\n\nInsert: %f\nResult used a parameter: %f\n",num,res);

	return 0;
}

float mult_v(float num){
	num = num * 3.149265358979323;
	return num;
}

float mult_p(float *num){
	*num = *num * 3.149265358979323;
	return *num;
}