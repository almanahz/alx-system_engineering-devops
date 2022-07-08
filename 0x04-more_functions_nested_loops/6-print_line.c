#include <stdio.h>

/**
 * print_line - prints a line of underscores of a given length
 *
 * @n: length of line to print
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
