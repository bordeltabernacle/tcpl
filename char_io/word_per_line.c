#include <stdio.h>

#define IN  1			/* inside a word */
#define OUT 0			/* outside a word */

/*count lines, words, and characters in input*/

int main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ' || c == '\n' || c == '\t') {
			printf("\n");
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}
	}
}
