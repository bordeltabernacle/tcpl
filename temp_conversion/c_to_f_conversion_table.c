#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300 */

int main() {
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  celsius = lower;
  printf("\n+---------+------------+\n");
  printf("| Celsius | Fahrenheit |\n");
  printf("+---------+------------+\n");
  while (celsius <= upper) {
    fahr = ((celsius * 9.0) / 5) + 32;
    printf("| %6.0f  | %9.1f  |\n", celsius, fahr);
    celsius = celsius + step;
  }
  printf("+---------+------------+\n\n");
}
