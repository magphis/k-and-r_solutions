#include <stdio.h>

int main()
{
	/* Program that count blanks (' '), tabs ('\t') and newlines ('\n'). */
	int c, b = 0, t = 0, nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++b;
		} else if (c == '\t') {
			++t;
		} else if (c == '\n') {
			++nl;
		}
	}
	/* Press CTRL+D in order to end the program and print the result */
	printf("===============\nNumber of blanks: %d\nNumber of tabs: %d\nNumber of newlines: %d\n", b, t, nl);
	return 0;
}
