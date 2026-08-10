#include <stdio.h>

int main()
{

    long int N;
    long int numeros;
    int zeros = 0;
    int positivos = 0;
    int negativos = 0;

    scanf("%ld", &N);

    for(long int i = 0; i < N; i++)
    {
        scanf("%ld", &numeros);

        if(numeros == 0){
            zeros++;
        }
        else if(numeros > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

    }

    printf("%d POSITIVOS\n", positivos);
    printf("%d NEGATIVOS\n", negativos);
    printf("%d ZEROS\n", zeros);





    return 0;
}