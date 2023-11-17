#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int o;
	int e;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[o] = src[e];
		o++;
		e++;
	}

	dest[o] = '\0';
	return (dest);
}

