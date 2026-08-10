#include <stdio.h>

int main()
{

    long int N;
    long int numeros;
    int zeros = 0;
    int positivos = 0;
    int negativos = 0;
    long int zerospor;
    long int positivospor;
    long int negativospor;

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

    zerospor = (zeros * 100) / N;
    positivospor = (positivos * 100) / N;
    negativospor = (negativos * 100) / N;

    printf("%ld%% POSITIVOS\n", positivospor);
    printf("%ld%% NEGATIVOS\n", negativospor);
    printf("%ld%% ZEROS\n", zerospor);





    return 0;
}