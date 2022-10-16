#include <stdio.h>
/**
 * main - size doesnt matter
 *
 * return: 0 unless otherwise
 */
int main(void)
{
	printf("size of a char: %ld byte(s) \n", sizeof(char));
	printf("size of an int: %ld byte(s) \n", sizeof(int));
	printf("size of an long int: %ld byte(s) \n", sizeof(long int));
	printf("size of an long long int: %ld byte(s) \n", sizeof(long long int));
	printf("size of an float: %ld byte(s) \n", sizeof(float));
	return (0);
}
