#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *matPtr;
    int i, j, n, m;
    printf("\n quantidade de linhas: ");
    scanf("%d", &n);

    printf("\n quantidade de colunas: ");
    scanf("%d", &m);

    matPtr = (int*) malloc(n*m*sizeof(int));

    if (matPtr == NULL)
    {
        printf("\n memory alloc error! \n");
    }
    else if ((n < 0) && (m < 0))
    {
        printf("\n memory alloc error! \n");
    }
    else if ((n == 0) || (m == 0))
    {
        printf("\n memory alloc error! \n");
    }
    else
    {
        printf("\n entrada de dados : \n");
        for (i = 0; i < n; i++)
        {
            for (j=0;j<m;j++)
            {
                printf("mat[%d][%d] = ", i, j);
                scanf("%d", (matPtr + i*m + j));
            }
        }
        printf("\n saida de dados : \n");
        for (i = 0; i < n; i++)
        {
            for (j=0;j<m;j++)
            {
                printf("%5d ", *(matPtr + i*m + j));
            }
            printf("\n");
        }
    }
    free(matPtr);
    return 0;
}
