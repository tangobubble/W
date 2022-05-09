//enter a random number from 0 - 500.
//output whether not the person is correct.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  //pusedo random number generator
  //this gets seeded
  //output a result

  int maxvalue = 500;
  srand(time(NULL));
  int randomnumber = rand() % maxvalue;
  //printf("%d\n",randomnumber);
  //modulus %
  //it gives remainder of some division
  printf("Guess a number between 0 - %d: ", maxvalue);
  int input;
  scanf("%d", &input);

  if(input < 0 || input > 500)
  {
      printf("Your number is out of the range\n");
  }

  if(input == randomnumber)
  {
      printf("YOu win\n");
  }
  else
  {
      printf("Wrong number, Try again\n");
  }
  printf("Thank you for playing\n");
  return 0;

}