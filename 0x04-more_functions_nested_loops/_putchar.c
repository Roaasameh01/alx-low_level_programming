#include "unistd.h"
#include "main.h"

/**
 * _ptchar - writes the character c to studout
 * @c: The charater to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
