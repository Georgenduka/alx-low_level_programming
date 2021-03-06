#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: returns destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, len1, len2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len1 = i;
	/* len1 = i - 1; */
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	len2 = j;
	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}
	return (dest);
}
