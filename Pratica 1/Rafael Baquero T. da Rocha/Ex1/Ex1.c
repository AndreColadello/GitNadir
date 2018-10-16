#include <stdio.h>
#include <stdlib.h>

float soma3(float a, float b, float c);
float prod3(float a, float b, float c);
float divide(float a, float b);
float mp3(float a1, float a2, float a3);

float soma3(float a, float b, float c) {
  return a+b+c;   // Retorna a soma.
}

float prod3(float a, float b, float c) {
  return a*b*c;   // Retorna o produto.
}

float divide(float a, float b) {
  if(b == 0) {    // Verifica se o denominador é zero.
    printf("\nDivisao por zero.\n");
    return -1;
  } else {
    return a/b;   // Retorna o quociente.
  }
}

float mp3(float a1, float a2, float a3) {
  float p1, p2, p3;
  float media;
  printf("\nInsira os pesos P1, P2 e P3:\n");
  scanf("%f %f %f",&p1,&p2,&p3);
  printf("\nP1 = %f;\nP2 = %f;\nP3 = %f.\n", p1, p2, p3);
  if ((p1 == 0) && (p2 == 0) && (p3 == 0)) {
    printf("\nDivisao por zero.\n");
    return -1;
  } else {
    media = (p1*a1+p2*a2+p3*a3)/(p1+p2+p3);
    return media;
  }
}

//gcc Ex1.c -o Ex1
int main() {
  float a,b,c;
  float resultado1, resultado2, resultado3, resultado4;
  printf("\nInsira os valores dos termos a, b e c:\n");
  scanf("%f %f %f", &a, &b, &c);
  printf("\na = %f;\nb = %f;\nc = %f.\n", a, b, c);
  resultado1 = soma3(a,b,c);
  resultado2 = prod3(a,b,c);
  resultado3 = divide(a,b);
  resultado4 = mp3(a,b,c);

  printf("\nr1 = %f;\nr2 = %f;\nr3 = %f;\nr4 = %f.\n", resultado1, resultado2, resultado3, resultado4);
  return 0;
}
