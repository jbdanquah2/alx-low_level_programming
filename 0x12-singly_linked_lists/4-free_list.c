#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	if (ptr != NULL)
	{
		free(ptr->str);
		free_list(ptr->next);
	}
	free(ptr);
}
