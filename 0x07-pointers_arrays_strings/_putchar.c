#include "mai.h"
#include <unistd.h>
/**
 * _putchar -write character c to stdout
 * @c: character to print 
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriatetly.
 */
int _putchar(char c)
{ 
	return(write(1, &c, 1));
}
