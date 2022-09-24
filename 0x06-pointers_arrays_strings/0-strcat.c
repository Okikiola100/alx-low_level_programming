#include "main.h"

/**
 * Author: Oladapo Okikiola(Okikiola100)
 *
 * _srtcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 */
char *_strcat(char *dest, char *erc)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (erc[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
