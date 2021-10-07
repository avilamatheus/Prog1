#include <stdio.h>
#include <locale.h>

int i, j;
int m[3][3];
void matriz();
void eleimpar();
void trocalinha();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    matriz();
    eleimpar();
    trocalinha();
}

void matriz()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            printf("digite o elemento [%i][%i] da matriz: \n", i, j);
            scanf("%i", &m[i][j]);
        }
    }
    printf("\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            printf("%i     ", m[i][j]);
        }
        printf("\n");
    }
}

void eleimpar()
{
     int numimpares0 = 0;
     int numimpares1 = 0;
     int numimpares2 = 0;
     for (i = 0; i < 3; i++)
    {
            if (m[i][0]%2 != 0)
                numimpares0 = numimpares0 + 1;
    }
    for (i = 0; i < 3; i++)
    {
            if (m[i][1]%2 != 0)
                numimpares1 = numimpares1 + 1;
    }
    for (i = 0; i < 3; i++)
    {
            if (m[i][2]%2 != 0)
                numimpares2 = numimpares2 + 1;
    }
    printf("Coluna 0: %i elemento(s) \n", numimpares0);
    printf("Coluna 1: %i elemento(s) \n", numimpares1);
    printf("Coluna 2: %i elemento(s) \n", numimpares2);
}

void trocalinha()
{
    int a[3][3];
    for (j = 0; j < 3; j++)
    {
        a[0][j] = m[2][j];
        a[2][j] = m[0][j];
        a[1][j] = m[1][j];
    }

    printf("\n");
    printf("linha 0 e linha 2 trocadas:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            printf("%i     ", a[i][j]);
        }
        printf("\n");
    }
}
