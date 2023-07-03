#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * set_string - sets the valuecof a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
