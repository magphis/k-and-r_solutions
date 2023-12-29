#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines, words, and characters in input */
/* exercise 11 suggests to do unit tests? */
int main()
{

	int nl, nw , nc, c, state;
	nl, nw, nc = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("==============\nNumber of lines: %d\nNumber of words: %d\nNumber of characters: %d\n", nl, nw, nc);
	return 0;
}
