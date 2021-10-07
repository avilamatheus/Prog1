#include <stdio.h>

int main ()
{
    int y = 5;
    int *yPtr;

    yPtr = &y;

    printf("Endereco da variavel y: %p \n", &y );
    printf("Endereco armazenado na variavel yPtr: %p \n", yPtr );
    printf("Valor de y: %d \n", y );
    printf("Valor de * yPtr: %d \n", *yPtr );
    printf("Valor de *& yPtr: %p \n", *&yPtr );
    printf("Valor de &* yPtr: %p \n", &*yPtr );
    return 0;
}
