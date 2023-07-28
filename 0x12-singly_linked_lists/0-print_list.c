#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Print_list - Prints elements of linked list
 * @h: prints the pointer to the list_t list
 *
 * Return:printed number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->str);
		h = h->next;
		n++;
	}

	return (n);
}
