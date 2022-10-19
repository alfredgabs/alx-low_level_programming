#include "main.h"
/**
 * print_sign - print sign
 * @n: value
 * Return: 1 if n is gretaer than 0, otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
	{
		return (-1);
		_putchar('-');
	}
}
