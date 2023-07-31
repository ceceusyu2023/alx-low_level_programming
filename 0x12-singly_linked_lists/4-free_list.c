#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: head of the list_t list
 *
 */
void free_list(list_t *head)
{
	list_t *current node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
