#includr "main.h"
/**
 * _strncat - concatrnates strings
 * @dest: destination
 * @src: source
 * @n: no of times to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
