#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of av
 * @av: double pointer to argv
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	int j = 0, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[j] = av[i][n];
			j++;
		}
		if (ptr[j] == '\0')
		{
			ptr[j++] = '\n';
		}
	}
	return (ptr);
}
