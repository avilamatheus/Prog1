#include <stdio.h>
#include <time.h> //inclui a biblioteca time.h usada pra gerar números aleátorios
#include <locale.h>

int opcao1(int x);
int opcao2(int x);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n;
    printf("Jogo de adivinhacao; tente adivinhar um numero aleatorio, este numero sera inteiro \n");
    printf("----------------------------------------------------------------------------------");
    printf("\n");
    printf("\n                 ------ Escolha um nivel de dificuldade: ------");
    printf("\nNivel 1: Numeros entre 0 a 25 com 3 tentativas, com dicas (digite 1 para selecionar)");
    printf("\nNivel 2: Numeros entre 0 a 50 com 5 tentativas, sem dicas (digite 2 para selecionar)\n");
    scanf("%i", &n);

    int caso1, caso2;
    caso1 = rand() % 25;
    caso2 = rand() % 50;

    if (n == 1)
    {
        opcao1(caso1);
    }
    else if (n == 2)
    {
        opcao2(caso2);
    }
    else
    {
        printf("O numero digitado é invalido");
    }

    return 0;
}
int opcao1(int x)
{
    int i;
    int a = 0;
    int y = 3;
    while(1)
    {
        if (y < 1)
        {
            printf("\n");
            printf("######### suas tentativas esgotaram, mais sorte na proxima! #########");
            printf("\n");
            break;
        }

        if (y < 2)
        {
         printf("\nULTIMA TENTATIVA:\n", y);
         scanf("%i", &a);
        }
        else
        {
            printf("\nvoce tem %i tentativas, insira seu chute:\n", y);
            scanf("%i", &a);
        }
        if (a == x)
        {
            printf("\nParabens, voce adivinhou o numero, ele era %i, voce chutou %i \n", x, a);
            break;
        }
        else if (a < x)
        {
            if (y == 1)
                {
                printf("--- voce errou, o numero era %i ---\n", x);
                y = 0;
                }
            else
            {
                printf("Meu numero é maior que %i, tente denovo\n", a);
                y = y-1;
            }
        }
        else if (a > x)
        {
            if (y == 1)
                {
                printf("--- voce errou, o numero era %i ---\n", x);
                y = 0;
                }
            else
            {
                printf("Meu numero é menor que %i, tente denovo\n", a);
                y = y-1;
            }
        }
    }
    return;
}
int opcao2(int x)
{
    int i;
    int a = 0;
    int y = 5;
    while(1)
    {
        if (y < 1)
        {
            printf("\n");
            printf("######### suas tentativas esgotaram, mais sorte na proxima! #########");
            printf("\n");
            break;
        }

        if (y < 2)
        {
         printf("\nULTIMA TENTATIVA:\n", y);
         scanf("%i", &a);
        }
        else
        {
            printf("\nvoce tem %i tentativas, insira seu chute:\n", y);
            scanf("%i", &a);
        }
        if (a == x)
        {
            printf("\nParabens, voce adivinhou o numero, ele era %i, voce chutou %i \n", x, a);
            break;
        }
        else if (a < x)
        {
            if (y == 1)
                {
                printf("--- voce errou, o numero era %i ---\n", x);
                y = 0;
                }
            else
            {
                printf("errado, tente denovo\n", a);
                y = y-1;
            }
        }
        else if (a > x)
        {
            if (y == 1)
                {
                printf("--- voce errou, o numero era %i ---\n", x);
                y = 0;
                }
            else
            {
                printf("errado, tente denovo\n", a);
                y = y-1;
            }
        }
    }
    return;
}
