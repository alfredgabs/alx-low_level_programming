#include <stdio.h>
/**
 * main - print all posdible combinations from 1 to 9 with spaces and comas
 *
 * Return: Always 0
 */
int main(void)
{ 
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
