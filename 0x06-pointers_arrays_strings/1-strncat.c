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
	int i;
	int j;

	for (i = 0; dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
