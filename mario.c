#include <stdio.h>

int main(void)
{
  // USING A DO-WHILE LOOP - to get the size of a grid and print the grid
  
  const int n;
  do 
  {
    printf("Input number: ");
    scanf("%d", &n);
  }
  while (n < 1);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}