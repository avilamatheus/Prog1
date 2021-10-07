//ARQUIVO:    Numero4.c
//TITULO:     Substituicao Negativos
//AUTOR:      Matheus Avila Naspolini
//            Todo o código é autoria propria, salvo em caso onde outros autores são citados
//Disciplina: DEC7531-02655A - Linguagem de Programação 1
//Data:       04/11/2020
//
//Proposito:
//Este programa irá substituir os valores negativos do vetor A (se existirem valores negativos) pelo valor do maior elemento do vetor B.
//
//Metodologia geral:
//Lista de tarefas a serem executadas:
//Solicitar ao usuário os valores do Vetor A e do Vetor B
//Encontrar o maior elemento do vetor B
//Encontrar (se existir) os valores negativos do vetor A, se estes existirem, irá substitui-los pelo maior elemento do vetor B.
//FUNÇÕES:
//negativo
//irá fazer a substituição dos elementos negativos do vetor A pelo maior elemento do vetor B
//maxv
//irá encontrar o maior elemento do vetor B

#include <stdio.h>
#define sizeA 5
#define sizeB 5

int a[sizeA];
int b[sizeB];
int i;
int maxv (int v[], int n);
void negativo(int x[], int m, int y[], int n);

int main()
{
    for (i = 0; i < sizeA; i++)
    {
        printf("digite o elemento %i do vetor A: ", i);
        scanf("%i", &a[i]);
    }
    printf("\n");
    printf("--------------- \n");
    printf("\n");
    for (i = 0; i < sizeB; i++)
    {
        printf("digite o elemento %i do vetor B: ", i);
        scanf("%i", &b[i]);
    }
    printf("\n");
    printf("--------------- \n");
    printf("\n");
    negativo(a, sizeA, b, sizeB);
}


//Nome da Função: negativo
//Autoria: Matheus Avila Naspolini
//Proposito:
// A função irá fazer a substituição dos elementos negativos do vetor A pelo maior elemento do vetor B
//
//Argumentos
//
//NOME      TIPO     VALOR/REFERÊNCIA    DESCRIÇÃO
//------------------------------------------------
//x         int      referência         vetor A, a ser percorrido e analisado
//m         int       valor              quantidade de elementos do vetor A
//y         int      referência         vetor B, a ser percorrido e analisado
//n         int       valor              quantidade de elementos do vetor B
//
//Valor que a função irá retornar
//------------------------------------------------
//Funções que são usadas: maxv
//
// A função será chamada por: main
//
//Algoritimo de funcionamento
//1- Inicialmente, a função verificara se algum elemento do vetor A é negativo, se sim, os valores negativos serão substituidos pelo maior elemento do vetor B
//2- Em caso de nenhum elemento de A ser negativo, a função irá informar que o vetor A continuou igual e irá imprimi-lo
//3 - Caso tenha elementos negativos, a função irá imprimir o novo vetor A

void negativo(int x[], int m, int y[], int n)
{
    int maior;
    int qtdnegativos = 0;
    maior = maxv (y, n);
    printf("maior elemento vetor B: %i", maior);
    for (i = 0; i < m; i++)
    {
        if (x[i] < 0)
        {
            x[i] = maior;
            qtdnegativos = qtdnegativos + 1;
        }

    }
    printf("\n");

    if (qtdnegativos > 0)
    {
        printf("novo vetor A: \n");
        for (i = 0; i < m; i++)
        {
           printf("%i \n", x[i]);
        }
    }
    else
    {
        printf("nao havia nenhum valor negativo no vetor A, portanto o mesmo continou igual: \n");
        for (i = 0; i < m; i++)
        {
            printf("%i \n", x[i]);
        }
    }
}

//Nome da Função: maxv
//Autoria: Matheus Avila Naspolini
//Proposito:
// A função irá percorrer o vetor e encontrar o maior elemento do vetor
//
//Argumentos
//
//NOME      TIPO     VALOR/REFERÊNCIA    DESCRIÇÃO
//------------------------------------------------
//v         int      referência         vetor a ser percorrido e analisado
//n         int       valor              quantidade de elementos do vetor
//
//Valor que a função irá retornar
//NOME      TIPO  DESCRIÇÃO
//------------------------------------------------
//maior   int   o valor do maior elemento do vetor
//
//Funções que são usadas: nenhuma
//
// A função será chamada por negativo
//
//Algoritimo de funcionamento
//1- Inicialmente, a função assumirá que o primeiro elemento do vetor é o maior elemento.
//2- Após isso, a função irá percorrer o vetor e irá comparar os elementos seguintes, vendo se são maiores ou não que o elemento anterior.
//3 - Se o elemento posterior for maior, a função irá defini-lo como maior e assim por diante.

int maxv (int v[], int n)
{
    int maior = v[0];
    for (i = 1; i < n; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }
    return maior;
    printf("maior elemento vetor B: %i\n", maior);
}
