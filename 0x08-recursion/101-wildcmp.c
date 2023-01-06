#include "main.h"

/**
 *wildcmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 1 , 0
 */
int wildcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s2 == '*')
		{
			s2++;
			if (!*s2) 
			{
	      return (1);
      }
			while (*s1)
			{
				if (wildcmp(s1, s2)) 
				{
		return (1);
	}
				s1++;
			}
			return (0);
		}
		else if
		{
    	    (*s1 != *s2) return (0);
    }
		s1++;
		s2++;
	}
	return (!*s1 && !*s2);
}
