#include <stdio.h>
/* prints histogram of the lengths of words */
int main()
{
	int c, i, len;
	int ndigit[10];

	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}
	len = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++ndigit[len];
			len = 0;
		} else {
			++len;
		}
	}
	printf("\nword lengths");
	printf("\n------------\n");
	for (i = 0; i < 10; ++i) {
		printf("%d\t|", i + 1);
		while (ndigit[i] > 0) {
			putchar('*');
			--ndigit[i];
		}
		putchar('\n');
	}
}
