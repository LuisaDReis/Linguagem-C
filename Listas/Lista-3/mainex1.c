#include <stdio.h>
#include <stdlib.h>

float media (float n1, float n2, float n3, char escolhe){

    float media_simples, media_ponderada;

    if (escolhe == 'A'){
        media_simples = (n1 + n2 + n3) / 3;
        return media_simples;
    }

    else if (escolhe == 'P'){
        media_ponderada = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        return media_ponderada;
    }

}

int main()
{
    float n1, n2, n3, resposta;
    char escolhe;
    int quantos;

    //printf("Quantos alunos deseja calcular? \n");
    scanf("%d", &quantos);

    for (int i = 0; i < quantos; i ++)
    {

        //printf("Digite 3 valores: \n");
        scanf("%f%f%f", &n1, &n2, &n3);

        //printf("Digite A se quiser calcular media simples e P se quiser calcular media ponderada. \n");
        scanf(" %c", &escolhe);

        resposta = media(n1,n2,n3, escolhe);

        printf("%.2f\n", resposta);
    }








    /*Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra
    for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula
    e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N
    alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)
    */




    return 0;
}
