/* Print Fahrenheit-Celsius table; using for loop. */
#include <stdio.h>

int main(void)
{
  int fahr;

  printf("\nUnccl Arj Lrne Jnyg!!\n\n");

  for (fahr = 230; fahr >= -40; fahr -= 10)
    printf("%3d F is%6.1f C\n", fahr, (5.0/9.0)*(fahr-32));

  return 0;
}
