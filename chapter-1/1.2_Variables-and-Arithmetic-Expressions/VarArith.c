#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper) {

		/* C = (5/9)(F-32) */
		/* Why not (5/9) * (fahr-32) ? Because the complier would execute 5/9 independently. So 5/9 = 0 */
		celsius = 5 * (fahr-32) / 9;
		printf("%.1f\t%.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
