#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
	int fahr;
	/* int lower = 0, upper = 300, step = 20; Since these numbers are constant and symbolic. 
	We can give them meaningful names by defining them. #define name replacement-text.
	/!\ The name has the form as a variable name and the replacement text can be any sequence of characters; it is not limited to numbers. */

	/* Print the table in reverse order */
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return 0;
}
