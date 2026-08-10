#include <stdio.h>

int main()
{
    //Declarando variaveis:
    float salario;
    float novsalario;
    char opcao;

    //Lendo salario:
    scanf(" %c",&opcao );
    scanf("%f", &salario);

    switch (opcao)
    {
        case 'A':
            novsalario = salario + salario*0.08; 
            printf("%.2f", novsalario);
        break;
        case 'B':
            novsalario = salario + salario*0.11;
            printf("%.2f", novsalario);
        break;
        case 'C':
            if(salario <= 1000){
                novsalario = salario + 350;
                printf("%.2f", novsalario);
            }
            else
            {
                novsalario = salario + 200;
                printf("%.2f", novsalario);
            }
        break;
    
        default:
        break;
    }




    return 0;
}