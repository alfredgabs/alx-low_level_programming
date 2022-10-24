#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		v = s[i];
		s[i] = s[c];
		s[c] = v;
	}
}
