#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0; s1[i] != 0 || s2[1] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			if (strlen(s1) < strlen(s2))
			{
				flag = -15;
				break;
			}
			flag = 15;
			break;
		}
	}
	return (flag);
}
