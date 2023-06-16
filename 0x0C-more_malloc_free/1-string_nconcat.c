#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *string_nconcat - concatenates two strings
  *@s1 : first string
  *@s2 : second string
  *@n : number of characters in string 2 we want to concatenate
  *Return: Pointer to newly allocated space in memory containing the new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int scount1, scount2, scount3, i;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	scount1 = strlen(s1);
	scount2 = strlen(s2);
	scount3 = scount1 + scount2 + 1;
	i = 0;

	a = malloc(sizeof(char) * scount3);
	for (i = 0; i < scount1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i <= n ; i++)
	{
		a[i + scount1] = s2[i];
	}

	a[scount3 - 1] = '\0';

	return (a);
}
