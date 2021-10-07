// FILE:          file_reader.h
// TITLE:         Sistema de Notas - File Reader
// SUBMITTED BY:  Lucca Machado da Silva & Matheus Avila Naspolini
//                All code is our own except where credited to others.
// FOR COURSE:    Programming Language I
// DUE DATE:      November 30, 2020
//
// PURPOSE:
// In this file, students data recorded in the external .txt file will
// be read by the program
//
// OVERALL METHOD:
// The list of general tasks is:
// 1. Open a file called "dados_alunos.txt".
// 2. Check if the file was opened correctly.
// 3. Read the students data contained in the file

// FUNCTIONS:
//
// reader
//    this function will read the students data in the file "dados_alunos.txt".
//
// INCLUDED FILES:
//    none
//
// DATA FILES:
// dados_alunos.txt

#ifndef file_reader_h
#define file_reader_h

// name OF FUNCTION: reader
// CREDIT: Lucca Machado da Silva & Matheus Avila Naspolini
// PURPOSE:
//    this function will read the students data in the file "dados_alunos.txt".
//
// PARAMETERS:
// name         type  value/reference   description
// ---------------------------------------------------------------------
// nome         char   value            student큦 name
// matricula    int    value            student큦 registration number
// nturma       int    value            student큦 class
// media        float  value            student큦 average grade
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
// 3. Read the student's name and it큦 corresponding registration number, class and average grade contained in the file.
void reader()
{
 FILE *rPtr;
 char name[70];
 int turma, matricula;
 float media;
 rPtr = fopen("dados_alunos.txt", "r");
 if(rPtr == NULL)
 {
     printf("Erro ao abrir o arquivo !");
 }

 while (fgets(name, 70, rPtr) != NULL)
 {
    printf("%s", name);
 }
 printf("\n");
 printf("\n");
}
#endif
