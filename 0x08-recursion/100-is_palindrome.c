#include "main.h"
#include <string.h>

/**
 * check_if_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @begin: start of string
 * @end: end of string
 *
 * Return: 1 or 0;
 */
int check_if_palindrome(char *s, int begin, int end)
{
	if (begin == end)
		return (1);
	if (s[begin] != s[end])
		return (0);
	if (begin < end + 1)
		return (check_if_palindrome(s, begin + 1, end - 1));
	return (1);
}
/**
 * is_palindrome - calls check_if_palindrome
 * @s: string to check
 *
 * Return: 1 or 0;
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (check_if_palindrome(s, 0, len - 1));
}
