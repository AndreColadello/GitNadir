#include <stdio.h>

void prod(float n1)
{
    printf("n1*3,14 = %.2f\n", n1*3.14);
    printf("n1 dentro da void prod: %.2f\n", n1);
}
void prore (float *n1)
{
    printf("n1*3,14 = %.2f\n", *n1*3.14);
    printf("n1 dentro da void prore: %.2f\n", *n1);
}

int main(){
float x;
printf("Entre com um valor: ");
scanf("%f", &x);
printf("n1 antes da função: %.2f\n", x);
prod(x);
printf("n1 depois da função: %.2f\n", x);

scanf("%f", &x);
printf("n1 antes da void prore: %.2f\n", x);
prore(&x);
printf("n1 depois da void prore: %.2f\n", x);

return 0;
}
