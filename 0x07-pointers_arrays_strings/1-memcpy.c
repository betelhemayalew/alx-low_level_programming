#include "main.h"

/**
 * _memcpy - copy memory area from
 * @dest: char array to copy into to copy
 * @src: char array to copy from true for rut
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
