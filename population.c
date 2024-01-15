// Program to determine how long(years) it takes a population to reach a given population size in regards to newly-born and newly-dead figures.

#include <stdio.h>
int main(void)
{
  // Declare variables
  int years;

  // Prompt user for valid input, keep loop till inputs are valid
  float start_population_size, end_population_size;
  do
  {
    printf("Enter initial population size: ");
    scanf("%f", &start_population_size);

    printf("Enter final population size: ");
    scanf("%f", &end_population_size);
  }
  while (start_population_size < 9 || end_population_size < start_population_size);

  // 
}

