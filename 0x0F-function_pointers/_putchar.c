#include "function_pointers.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _purchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and the error number is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}