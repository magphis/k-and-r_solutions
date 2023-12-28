#include <stdio.h>

int main()
{
	printf("%d\n", getchar() != EOF);
	/* The expression return 1 if the input is not EOF (end of file).
	If the input is EOF then the program stops */
	return 0;
}
