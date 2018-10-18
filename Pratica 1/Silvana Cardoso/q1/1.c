
#include <stdio.h>

int main()
{
    char funcao;
    double n1, n2;

    printf("Entre com uma função (+, *, /, mp): ");
    scanf("%c", &funcao);

    if( funcao == * )
    {
        switch (funcao)
        {
        case '+':
            printf("%.2lf + %.2lf + %.2lf= %.2lf", n1, n2, n3, n1+n2+n3);
            break;

        case '-':
            printf("%.2lf * %.2lf * %.2lf= %.2lf", n1, n2, n3, n1*n2*n3);
            break;

        case 'mp':
            printf("Os pesos são 5 para n1, 3 para n2 e 2 para.\n");
            printf("Média ponderada: ((%.2lf*5)+(%.2lf*3)+(%.2lf*2))/10", n1, n2, n3, ((n1*5)+(n2*3)+(n3*2))/10)

        default:
            continue;
        }
    }
    else
    {
        switch (funcao)
        case '/':
            if (n2==0)
                printf("Erro! Impossível dividir por 0.");
            else
            printf("%.2lf / %.2lf = %.2lf", n1, n2, n1/n2);
            break;

        default:
            continue;

    }


}
