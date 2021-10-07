//exercicio 3
#include <stdio.h>
int main()
{
    int vetor[10];
    int i;
    float sumpares = 0;
    float sumInd = 0;

    for (i = 0; i < 10; i++)
    {
        printf("digite o elemento %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i]% 2 == 0)
        {
            sumpares = sumpares + vetor[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (i%2 == 0)
        {
            sumInd = sumInd + vetor[i];
        }
    }
    printf("soma elementos pares: %.2f \n", sumpares);
    printf("soma elementos indic. pares: %.2f \n", sumInd);
    return 0;
}
