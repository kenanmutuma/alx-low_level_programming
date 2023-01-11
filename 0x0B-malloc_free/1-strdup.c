#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new line which is duplicate
 *@str: char
 *Return: 0
 */

char *_strdup(char *str)
{

int length;
char *dup;

if (str == NULL)
	return (NULL);

length = strlen(str);
dup = malloc((length + 1) * sizeof(char));

if (dup == NULL)
	return (NULL);

strcpy(dup, str);
return (dup);

}

