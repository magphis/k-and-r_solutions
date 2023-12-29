#include <stdio.h>

int main()
{	/* Here is my solution which depends on a counter */
	int c, d;
	d = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			d = 0; /* Counter reset */
		} else {
			++d;
			if (d >= 2) {
				printf("");
			} else {
				putchar(c);
			}
		}
	}
	return 0;
}
