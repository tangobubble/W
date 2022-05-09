#include <stdio.h>

int main()
{
   int pizzaToEat = 100;
   int output = --pizzaToEat; 
   printf("output : %d\n", output);
   ++pizzaToEat;
   printf("output : %d\n", pizzaToEat);
   

   return 0;
}