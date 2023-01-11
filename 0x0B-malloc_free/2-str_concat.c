#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 *@s1: input 1 to concat
 *@s2: input 2 to concat
 *Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc((len1 + len2) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
