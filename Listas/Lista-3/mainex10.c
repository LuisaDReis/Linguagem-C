#include <stdio.h>
#include <stdlib.h>

void verifica()
{

    int quantos, idade;
    scanf("%d", &quantos);

    for (int i = 0; i < quantos; i++)
    {

        scanf("%d", &idade);

        if (idade >= 5 && idade <= 7)
        {
            printf("F\n");
        }

        else if (idade >= 8 && idade <= 10)
        {
            printf("E\n");
        }

        else if (idade >= 11 && idade <= 13)
        {
            printf("D\n");
        }

        else if (idade >= 14 && idade <= 15)
        {
            printf("C\n");
        }

        else if (idade >= 16 && idade <= 17)
        {
            printf("B\n");
        }

        else if (idade > 18)
        {
            printf("A\n");
        }


    }



}





int main()
{

    verifica();

    return 0;
}
