#include <stdio.h>

int main()
{
FILE *filePtr;
int i;
filePtr =fopen("output.txt", "w");

if (filePtr == NULL)
{
printf("\n erro nao foi possivel criar arquivo");
return 1;
}
for (i = 1; i <= 10; i++)
fprintf(filePtr, "%d\n", i);

printf("\n o programa gravou numeros de 1 a 10 para o arquivo output.txt");
fclose(filePtr);

return 0;

}
