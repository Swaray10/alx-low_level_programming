#include <stdio.h>
/**
 * main -hexadecimal
 *
 * Return: 0 on success
 */
int main(void)
{
	int y;
	char x;


	for (y = 0; x < 10; x++)
		putchar((y % 10) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
