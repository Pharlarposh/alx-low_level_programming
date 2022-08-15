#include "lists.h"

/**
 *free_list - entry point
 *@head: beginning of the list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
