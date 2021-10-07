#include <stdio.h>

int max(int num1, int num2);
int main()
{
int a, b;
int num_max;

printf("\n O programa retorna o maior de dois numeros\n");
printf("\n Digite o 1o numero:  ");
scanf("%d", &a);
printf("\n Digite o 2o numero:  ");
scanf("%d", &b);

num_max = max(a, b);

if (a > b)
    printf("\n\n O maior numero eh: %d\n", num_max);
if (a < b)
    printf("\n\n O maior numero eh: %d\n", num_max);
else


return 0;

}

int max(int num1, int num2)
{
int result;
if (num1 > num2)
result = num1;

if (num1 < num2)
result = num2;

if (num1 == num2)
printf("\nos numeros sao iguais");

return result;
}
