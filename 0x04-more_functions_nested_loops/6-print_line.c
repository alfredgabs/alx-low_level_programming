#include "main.h"
/**
 * print_line - print a straight line
 * @n: number of times the straight line is printed
 * Return: no return
 */
void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
		_putchar(95);
	_putchar('\n');
}
