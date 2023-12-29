#include <stdio.h>


/* Another cool version which is uses a second variable */
int main()
{
	int c, prev;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			if (c != prev) {
				putchar('\n');
			}
		} else {
			putchar(c);
		}
		prev = c;
	}
	return 0;

}
