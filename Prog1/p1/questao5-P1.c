#include <stdio.h>
#include <locale.h>

int i;
int v[10];
int sum = 0;
void vetor();
void somamenores();
int valork();
void novovetor();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    vetor();
    somamenores();
    int menor = valork();
    printf("menor elemento do vetor: %i\n", menor);
    novovetor();
}

void vetor()
{
   for (i = 0; i < 10; i++)
    {
        printf("digite o elemento %i do vetor: ", i);
        scanf("%i", &v[i]);
    }
}

void somamenores()
{
    for (i = 1; i < 10; i++)
    {
        if (v[i] < v[i-1])
        {
            sum = sum + v[i];
        }
    }
    printf("\nsoma dos elementos que são menores do que o elemento anterior é: %i \n", sum);
}

int valork()
{
    int k;
    printf("\ninsira o valor k\n");
    scanf("%i", &k);
    int menor = v[0];
    for (i = 1; i < 10; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (v[i] < k)
        {
            v[i] = menor;
        }
    }
    return menor;
}

void novovetor()
{
    printf("vetor novo: \n");
    for (i = 0; i < 10; i++)
    {
            printf(" %i",v[i]);
    }
}
