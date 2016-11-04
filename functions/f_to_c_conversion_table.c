#include <stdio.h>

#define LOWER 0			/*lower limit of table */
#define UPPER 300		/*upper limit of table */
#define STEP  20		/*step size */

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

double convert(int fahr);

int main()
{

	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3d %6.1f\n", fahr, convert(fahr));
	}

	return 0;

}

/* conversion: convert Fahrenheit to Celsius */
double convert(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}
