// FILE:          SistemaAlunos.c
// TITLE:         Sistema de Notas
// SUBMITTED BY:  Lucca Machado da Silva & Matheus Avila Naspolini
//                All code is our own except where credited to others.
// FOR COURSE:    Programming Language I
// DUE DATE:      November 30, 2020
//
// PURPOSE:
// With this program, the user will define the number of tests and the
// number of students to calculate the average of each students grades,
// identifying each one by name, registration number and class.
// After that, the program will save this information in an external file
// that can be read by the program later
//
// OVERALL METHOD:
// The list of general tasks is:
// 1. Open a menu asking the user what action the program should take.
// 2. If the user chooses option 1, the program will ask for the number of
//    students and tests, starting the process of calculating averages and
//    later saving the information entered by the user.
// 3. If the user chooses option 2, the program will read the external file
//    containing the information saved about the students and their
//    respective averages.
// 4. If the user chooses option 0, the program will close without any further action.

// FUNCTIONS:
//
// printAluno
//    this function will print the student data that the user
//    entered in the current session of the program
//
// menu
//    in this function, a menu will appear giving 3 options for the user to choose,
//    depending on the choice, the program will execute a series of actions
//
// INCLUDED FILES:
//    stdio.h
//    string.h
//    stdlib.h
//    file_writer.h
//    file_reader.h
//
// DATA FILES:
// dados_alunos.txt

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno
{
  char nome[70];
  int matricula;
  int nturma;
  float media;
};

#include "file_writer.h"
#include "file_reader.h"

void printAluno( struct aluno * aluno );
void menu();

int main()
{
  int c;
  struct aluno *LibPtr;  // Ponteiro para Vetor
  struct aluno *AuxPtr;  // Ponteiro auxiliar

  do
  {
    menu ();
    scanf("%i", &c);
    printf("Voce selecionou a opcao %i \n",c);
    printf( "----------------------------------\n");

    if( c == 1 )
    {
        int i, x, n, p;
        printf("Quantidade de alunos: ");
        scanf("%i", &n);
        printf("Quantidade de avaliacoes: ");
        scanf("%i", &p);
        printf( "----------------------------------\n");

        LibPtr = (struct aluno *) malloc ( n * sizeof (struct aluno) );

        printf("Entrada de dados: \n");
        printf( "----------------------------------\n");
        AuxPtr = LibPtr;

        for (i = 0; i < n; i++)
        {
            float soma = 0;
            float nota = 0;
            float media = 0;
            printf("Aluno %i: \n", i + 1);

            printf("Nome do Aluno: ");
            scanf(" %[^\t\n]s", (AuxPtr + i)->nome);

            printf("Matricula do Aluno %s: ",(AuxPtr + i)->nome);
            scanf ("%i", &(AuxPtr + i)->matricula);

            printf("Turma do Aluno %s: ",(AuxPtr + i)->nome);
            scanf ("%i", &(AuxPtr + i)->nturma);

            printf("Calculo de Media do Aluno %s\n",(AuxPtr + i)->nome);
            for (x = 0; x < p; x++)
            {
                printf("    informe a nota da P%i do aluno %s: ", x+1,(AuxPtr + i)->nome);
                scanf("%f", &nota);
                soma = soma + nota;
                media = soma/p;
                (AuxPtr + i)->media = media;
            }
            printf( "----------------------------------\n");
        }

        printf("Saida de dados: \n");
        printf( "\n");
        AuxPtr = LibPtr;

        for (i = 0; i < n; i++)
        {
            printf("Aluno %i: ", i + 1);
            printAluno( (AuxPtr + i) );
        }

        for (i = 0; i <n; i++)
        {
            writer(AuxPtr+i);
        }
    }
    if( c == 2 )
    {
      reader();
    }
   if( c == 0 )
    return 0;

  } while (c != 0);


  return 0;
}

// name OF FUNCTION: printAluno
// CREDIT: Lucca Machado da Silva & Matheus Avila Naspolini
// PURPOSE:
//    this function will print the student data previously entered by the user
//    after choosing option 1 of the program in the menu.
//
// PARAMETERS:
// name         type  value/reference   description
// ---------------------------------------------------------------------
// nome         char   reference         student큦 name
// matricula    int    reference         student큦 registration number
// nturma       int    reference         student큦 class
// media        float  reference         student큦 average grade
//
// RETURN VALUE: none
//
// CALLS TO: none
//
// CALLED FROM: main
//
// METHOD: The following is pseudocode describing how the function works.
// 1. Print the student큦 name.
// 2. Print the student큦 registration number.
// 3. Print the student큦 class.
// 4. Print the student큦 average grade.
void printAluno( struct aluno * aluno )
{
  printf( "Nome do Aluno : %s\n", aluno->nome);
  printf( "Matricula: %d\n", aluno->matricula);
  printf( "Turma: %d\n", aluno->nturma);
  printf( "Media: %.1f\n", aluno->media);
  printf( "----------------------------------\n");
  return;
};
// name OF FUNCTION: menu
// CREDIT: Lucca Machado da Silva & Matheus Avila Naspolini
// PURPOSE:
//    in this function, a menu will appear giving 3 options for the user to choose,
//    depending on the choice, the program will execute a series of actions
//
// PARAMETERS:
// none
//
// RETURN VALUE: none
//
// CALLS TO: none
//
// CALLED FROM: main
//
// METHOD: The following is pseudocode describing how the function works.
// 1. Print the option 1
// 1. Print the option 2
// 1. Print the option 0
void menu()
{
    printf("-------------------------------------\n");
    printf(" 1) Adicionar Notas ao Sistema e ao arquivo texto\n");
    printf(" 2) Ler dados do arquivo texto\n");
    printf(" 0) Sair \n");
    printf("-------------------------------------\n");

    return;
}
