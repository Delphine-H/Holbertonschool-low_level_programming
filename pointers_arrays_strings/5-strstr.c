#include "main.h"
#include <stddef.h>


/**
 * _strstr - function that locates a substring.
 *
 *@haystack: string
 *@needle: substring to search
 *Return: a ponter to the beginning of the located substring, or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

/**
 *compare - function that compare 2 strings
 *@haystack: one string
 *@needle: an other string
 *Return: 0 if string are different, else '\0'
 */


int compare(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}
