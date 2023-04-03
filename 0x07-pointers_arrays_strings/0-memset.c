#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params true
 * @b: data to change forquastion
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
