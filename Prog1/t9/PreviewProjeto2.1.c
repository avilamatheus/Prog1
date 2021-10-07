#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file_writer.h"

struct aluno
{
  char nome[70];
  int matricula;
  int nturma;
  float media;
};

//-----------------------------------------------------
void printAluno( struct aluno * aluno );
//======================================================
int main( )
{
  struct aluno *LibPtr;  // Ponteiro para Vetor
  struct aluno *AuxPtr;  // Ponteiro auxiliar
  int i, x, n, p;

  printf("Quantidade de alunos: ");
  scanf("%i", &n);
  printf("Quantidade de avaliacoes: ");
  scanf("%i", &p);

  LibPtr = (struct aluno *) malloc ( n * sizeof (struct aluno) );

  printf("\n Entrada de dados: \n");
  AuxPtr = LibPtr;

  for (i = 0; i < n; i++)
  {
    float soma = 0;
    float nota = 0;
    float media = 0;
     printf("\n aluno %i: ", i + 1);

     printf("Nome do Aluno: ");
     scanf(" %[^\t\n]s", (AuxPtr + i)->nome);

     printf("\nMatricula do Aluno %s: ",(AuxPtr + i)->nome);
     scanf ("%i", &(AuxPtr + i)->matricula);

     printf("\nTurma do Aluno %s: ",(AuxPtr + i)->nome);
     scanf ("%i", &(AuxPtr + i)->nturma);

     printf("\n Calculo Media do Aluno %s: ",(AuxPtr + i)->nome);
     for (x = 0; x < p; x++)
     {
         printf("\n informe a nota da P%i do aluno %s \n", x+1,(AuxPtr + i)->nome);
         scanf("%f",&nota);
         soma = soma + nota;
         media = soma/p;
        (AuxPtr + i)->media = media;
     }
 }

   printf("\n Saida de dados: \n");
   AuxPtr = LibPtr;

   for (i = 0; i < n; i++)
   {
      printf("\n\nAluno %i: ", i + 1);
      printAluno( (AuxPtr + i) );
   }
   for (i = 0; i < n; i++)
  {
    write(AuxPtr + i);
  }

 return 0;
}
//======================================================
void printAluno( struct aluno * aluno )
{
  printf( "\n----------------------------------\n");
  printf( "Nome do Aluno : %s\n", aluno->nome);
  printf( "Matricula   : %d\n", aluno->matricula);
  printf( "Turma: %d\n", aluno->nturma);
  printf( "Media: %.1f\n", aluno->media);
  printf( "\n----------------------------------\n");
  return;
};
