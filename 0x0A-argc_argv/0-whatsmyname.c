#include <stdio.h>
#include "main.h"
/**
 *main - a function that writes a name without compiling
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 0 for success
 */

int main(int argc, char *argv[0])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
