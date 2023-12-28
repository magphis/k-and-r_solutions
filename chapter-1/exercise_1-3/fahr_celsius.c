#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Temperature Conversion Program\n===============\nFahr\tCelsius\n");
	while(fahr <= upper) {

		/*
		C = (5/9)(F-32)
		Why not (5/9) * (fahr-32) ? Because integer division would truncate it to zero.
		But if an arithmetic operator has one floating-point operand and one integer operand,
		the integer will be converted to floating-point before the operation is done.
		*/

		celsius = (5.0 / 9) * (fahr-32);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
