#include <stdio.h>

int main()
{

    //Declarando variaveis:
    int velocidade;
    int velocidademax;

    //Lendo as variaveis:
    scanf("%d%d",&velocidademax,&velocidade);

    //Condição das multas
    if(velocidade <= velocidademax)
    {
        printf("Motorista respeitou a lei");
    }
    else if(velocidade <= velocidademax + 10)
    {
        printf("Multa de 50 reais");
    }
    else if(velocidade >= velocidademax + 11 && velocidade <= velocidademax + 30 )
    {
        printf("Multa de 100 reais");
    }
    else if(velocidade > velocidademax + 30)
    {
        printf("Multa de 200 reais");
    }

    return 0;
}