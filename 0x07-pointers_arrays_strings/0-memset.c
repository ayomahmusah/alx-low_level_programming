#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: initial address of memory to be filled
 * @b: desired value
 * @n: the number of bytes to be changed 
 *
 * Return: the array with new value for n bytes
 */
char *_memset(char *s, char b, unasigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
