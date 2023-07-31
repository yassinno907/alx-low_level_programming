#include "main.h"

/**
 * _memset - function fill the first x bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int x)
{
	unsigned int i = 0;

	while (i < x)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
  
