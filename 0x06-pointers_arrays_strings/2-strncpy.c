#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: copy to
 * @n: no of times
 * @src: copy from
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] = '\0')
		dest[i] = src[i];
		i++;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
