#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *srt);
dog_t *new_dog(char *name, float age, char *owner);

/**
 *strlen - finds the length of a string
 *@str: the string
 *Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 *strcopy - copies a string
 *@dest: the buffer stroring the string copy
 *@src: the source string
 *Return: the pointer to the dest
 */

char *strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}

/**
 *new_dog - creates a new dog
 *@name: the name of the dog
 *@age: the age of the dog
 *_strcopy - copies a string
 *@owner: the owner of the dog
 *Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = strcopy(doggo->owner, owner);

	return (doggo);
}


