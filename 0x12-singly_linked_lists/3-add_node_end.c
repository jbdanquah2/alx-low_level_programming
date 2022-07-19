#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string for new node
 *
 * Return: addresss or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;
	list_t *ptr = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	else
		*head = new;

	return (new);
}
