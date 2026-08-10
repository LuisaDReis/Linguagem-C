#include <stdio.h>

int main()
{
    double numero;
    long int valor;
    int divisiveis3e9 = 0;
    int divisiveiscinco = 0;
    int divisiveisdois = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &numero);

        if(numero != (long int)numero)
        {
            printf("Numero nao eh divisivel pelos valores\n");
        }
        else
        {
            valor = (long int)numero;

            if(valor % 3 == 0 && valor % 9 == 0)
            {
                divisiveis3e9++;
            }

            if(valor % 2 == 0)
            {
                divisiveisdois++;
            }

            if(valor % 5 == 0)
            {
                divisiveiscinco++;
            }

            if(!(valor % 3 == 0 && valor % 9 == 0) && valor % 2 != 0 && valor % 5 != 0)
            {
                printf("Numero nao eh divisivel pelos valores\n");
            }
        }
    }

    printf("%d Numeros sao divisiveis por 3 e por 9\n", divisiveis3e9);
    printf("%d Numeros sao divisiveis por 2\n", divisiveisdois);
    printf("%d Numeros sao divisiveis por 5\n", divisiveiscinco);

    return 0;
}