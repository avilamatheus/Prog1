// FILE:          file_writer.h
// TITLE:         Sistema de Notas - File Writer
// SUBMITTED BY:  Lucca Machado da Silva & Matheus Avila Naspolini
//                All code is our own except where credited to others.
// FOR COURSE:    Programming Language I
// DUE DATE:      November 30, 2020
//
// PURPOSE:
// In this file, students data will be recorded in an external .txt file that
// the program can use to read when the user wants to.
//
// OVERALL METHOD:
// The list of general tasks is:
// 1. Open a file called "dados_alunos.txt".
// 2. Check if the file was opened correctly.
// 3. Print the students data to the file.

// FUNCTIONS:
//
// writer
//    this function will print the students data in the file "dados_alunos.txt".
//
// INCLUDED FILES:
//    none
//
// DATA FILES:
// dados_alunos.txt


#ifndef file_writer_h
#define file_writer_h

// name OF FUNCTION: writer
// CREDIT: Lucca Machado da Silva & Matheus Avila Naspolini
// PURPOSE:
//    this function will print the students data in the "dados_alunos.txt".
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
// 1. Open a file called "dados_alunos.txt".
// 2. Check if the file was opened correctly.
// 3. Print the student큦 name and it큦 corresponding registration number, class and average grade to the file.
void writer(struct aluno *dados)
{
    FILE *fileptr;
    fileptr = fopen("dados_alunos.txt", "a");

    if(fileptr == NULL)
    {
        printf("Erro ao abrir o arquivo!");
    }

    fprintf(fileptr,"\nNome: %s \nMatricula: %d \nTurma: %d \nMedia: %.2f", dados->nome,dados->matricula, dados->nturma, dados->media );

    fclose(fileptr);
}
#endif
