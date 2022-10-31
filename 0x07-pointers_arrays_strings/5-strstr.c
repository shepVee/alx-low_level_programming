#include "main.h"

/**
 *_strstr - locates substring
 *
 *@haystack: function parameter
 *@needle: function parameter
 *
 *Return: pointer to a character
 */
char *_strstr(char *haystack, char *needle)
{
	char *stack;
	char *need;

	while (*haystack != '\0')
	{
		stack = haystack;
		need = needle;

		while (*haystack != '\0' && *need != '\0' && *stack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (stack);
		haystack = stack + 1;
	}
	return (0);

