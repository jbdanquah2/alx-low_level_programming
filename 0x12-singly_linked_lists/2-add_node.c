#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: list
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

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
	new->next = *head;

	*head = new;
	
	return (*head);
}
