#include "main.h"

/**
 * char *_memcpy(char *dest, char *src, unsigned int n);
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size this is pointer 
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

