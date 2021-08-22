#include <stdio.h>

int and_calculate(int a, int b);
int or_calculate(int c, int d);
int xor_clculate(int e, int f);

int main()
{
   int value_a, value_b;

   scanf("%d %d", &value_a, &value_b);

   printf("%d\n", and_calculate(value_a, value_b));
   printf("%d\n", or_calculate(value_a, value_b));
   printf("%d\n", xor_clculate(value_a, value_b));

   return 0;
}

int and_calculate(int a, int b)
{
   if (a == 1)
   {
      if (b == 1)
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   else
   {
      return 0;
   }
}


int or_calculate(int c, int d)
{
   if (c == 0)
   {
      if (d == 0)
      {
         return 0;
      }
      else
      {
         return 1;
      }
   }
   else
   {
      return 1;
   }
}

int xor_clculate(int e, int f)
{
   if (e == f)
   {
      return 0;
   }
   else
   {
      return 1;
   }
}