#include <stdio.h>
/**
 * main -prints stuff
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
