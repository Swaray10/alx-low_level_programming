#include <stdio.h>
/**
 * main -code to print from 1 to 10 in floats
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}

