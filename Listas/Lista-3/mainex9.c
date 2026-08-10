#include <stdio.h>
#include <stdlib.h>


float calcula_media(int quantos){

    float nota, nota_total = 0;
    int conta_pessoa = 0;
    float media;

    for (int i = 0; i < quantos; i++){

        scanf("%f", &nota);

        if  (nota >= 6){
            nota_total += nota;
            conta_pessoa ++;

        }


    }

    media = nota_total/conta_pessoa;

    return media;

}

int main()
{
    int quantos;
    float media_aluno;

    scanf("%d", &quantos);

    media_aluno = calcula_media(quantos);

    printf("%.1f", media_aluno);



    return 0;
}



