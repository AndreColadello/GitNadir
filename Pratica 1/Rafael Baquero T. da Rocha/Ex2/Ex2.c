#include <stdio.h>
#include <stdlib.h>

void multPI_valor(float x);
void multPI_ref(float* x);

void multiPI_valor(float x) {
  x = 3.14*x;
  printf("- Dentro da funcao: a = %f;\n",x);
  return;
}

void multiPI_ref(float* x) {
   *x = (*x)*3.14;
   printf("- Dentro da funcao: a = %f;\n",*x);
   return;
}
int main() {
  float a;
  scanf("%f",&a);
  printf("\nValor de entrada: %f.\n\n",a);
  printf("Passagem por valor\n");
  multiPI_valor(a);
  printf("- Fora da funcao: a = %f.\n",a);

  printf("\nPassagem por referencia\n");
  multiPI_ref(&a);
  printf("- Fora da funcao: a = %f.\n",a);

return 0;
}
