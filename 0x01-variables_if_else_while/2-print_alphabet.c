#include <stdio.h>
/**
 * main - prints letters in lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
