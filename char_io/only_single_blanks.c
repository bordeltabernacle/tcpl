#include <stdio.h>
/*replace one or more blanks in input with single blank*/
/*and send to output*/
int main()
{
	int c, prev;

	prev = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' || prev != ' ')
			putchar(c);
		prev = c;
	}
}
