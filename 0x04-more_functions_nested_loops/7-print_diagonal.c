#include <stdio.h>
/**
 * print_diagonal - print a diagonal line of backslashes
 *
 * @n: length of line to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int m = n;

	if (n <= 0)
		putchar('\n');

	for (; n > 0; n--)
	{
		for (i = 0; i < m - n; i++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
