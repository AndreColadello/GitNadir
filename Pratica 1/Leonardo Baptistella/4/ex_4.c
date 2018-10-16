/* This code will be used to calculate the sum, multiplication, division and average for real numbers 
and save the results in a file.

Author: Leonardo Baptistella  13/10/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "ex_3.h"

int main(void){
	float rtd=0;
	FILE *results; //pointer to file

	// a+ -> save data in the end of file, if file don't exists it will be created
	results = fopen("results.txt","a+");

	//if file does not open
	if (results == NULL){
    	printf("ERROR\n");
    	exit(0);
	}

	rtd = calculator();

	fprintf(results, "%f\n",rtd);

	fclose(results);

	return 0;
}

