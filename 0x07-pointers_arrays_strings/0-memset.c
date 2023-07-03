#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fill memory with a constant byte
 * @s: starting address of the memory to fill
 * @b: the constant byte
 * @n: number of bytes to be changed
 *
 * Return: change array with the new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
