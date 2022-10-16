#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
		putchar(p + '0');
	putchar('\n');
	return (0);

}
