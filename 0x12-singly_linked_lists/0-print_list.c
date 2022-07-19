#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: string or list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (count);
}
