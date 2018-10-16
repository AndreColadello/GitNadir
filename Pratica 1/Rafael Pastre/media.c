#include "media.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

//Exercicio 1
double soma(double a, double b, double c){
    return a+b+c;
}

double mult(double a, double b, double c){
    return a*b*c;
}

double divi(double num, double den){
    if(den == 0)
        return FLT_MAX;

    return num/den;
}

double media(double v1, double v2, double v3,double p1, double p2, double p3){
    return divi((v1*p1 + v2*p2 + v3*p3),(p1+p2+p3));
}

//Exercicio 2
double mult_pi_valor(double val){           // por valor não altera o parâmetro
    return acos(-1)*(val);
}

void mult_pi_referencia(double* val){       // por referência altera o parâmetro
    *val = acos(-1)*(*val);
}
