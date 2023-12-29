#include <stdio.h>

#define IN 1
#define OUT 0

/* write a program that prints its input one word per line */
/* IN/OUT state version */
int main()
{

	int c, state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			putchar('\n');
		}
		if (state == IN) {
			putchar(c);
		}
	}
	return 0;
}
