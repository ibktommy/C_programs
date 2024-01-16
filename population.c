// Program to determine how long(years) it takes a population to reach a given population size in regards to newly-born and newly-dead figures.

#include <stdio.h>
#include <math.h>
int main(void)
{
  // Declare variables
  int years = 0;
  float birth_population = 0, death_population = 0, added_population = 0, growth_rate;

  // Prompt user for valid input, keep loop till inputs are valid
  int start_population_size;
  do
  {
    printf("Enter initial population size: ");
    scanf("%i", &start_population_size);
  }
  while (start_population_size < 9);

  int end_population_size;
  do 
  {
    printf("Enter final population size: ");
    scanf("%i", &end_population_size);
  }
  while (end_population_size < start_population_size);

  // Initialize growth_rate
  growth_rate = (float) start_population_size;
}

