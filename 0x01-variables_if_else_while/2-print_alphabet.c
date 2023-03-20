#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
