#include<stdio.h>

long fatorial(int num);

int main()
{
   int num;

   printf("Digite o numero para calcular o fatorial\n");
   scanf("%d",&num);

   if (num >= 0)
       printf("%d! = %ld\n", num, fatorial(num));
   else
      printf("Nao ha fatorial de numero negativo\n");

   return 0;
}

long fatorial(int num)
{
   int c;
   long resultado = 1;
   printf("\nN = %i\n", num);
   for( c = 1 ; c <= num ; c++ )
   {
       resultado = resultado*c;
   }
   return ( resultado );
}
