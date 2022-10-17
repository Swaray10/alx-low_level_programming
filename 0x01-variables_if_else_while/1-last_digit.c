#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Digit locator
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int ladigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ladigit = n % 10;
	if (ladigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ladigit);
	else if (ladigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ladigit);
	else if (ladigit < 6 && ladigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ladigit);
	return (0);
}
