#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	head = head->next;

	while (head)
	{
		if (head->str)
			free(head->str);
		free(head);
		head = head->next;
	}
}
