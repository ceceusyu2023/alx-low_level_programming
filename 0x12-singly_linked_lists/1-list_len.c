#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in linked list
 * @h: prints the pointer to the list_t list
 *
 * Return: h the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

