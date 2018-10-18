#include <stdio.h>

typedef struct valvula_de_ar {
    int modo;
    float ab;
    float t;
}Valvula;

int printStruct( Valvula valv );
int setStruct( Valvula * valv );

int main(){

    Valvula valv;
    setStruct(&valv);
    printStruct(valv);

}

int printStruct( Valvula valv ){
    printf("Modo de opera��o = %d\n", valv.modo);
    printf("Abertura da v�lvula de vaz�o de ar = %.1f\n ", valv.ab);
    printf("Tempo de abertura da v�vula de vaz�o de ar = %.1f\n", valv.t);

    return 0;
}

int setStruct( Valvula * valv){

    printf ("Insira os valores de modo, abertura e tempo de abertura\n");
    scanf("%d %f %f", &(valv->modo), &(valv->ab), &(valv->t));

    return 0;
}
