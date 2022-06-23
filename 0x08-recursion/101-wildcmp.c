#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp -calls a function to compute square root
 * @s1: string to compare
 * @s2: string to compare
 * Return: 1 or 0 from call to compare_strings
 */

int wildcmp(char *s1, char *s2)
{

	return (compare_strings(s1, s2, 0));
}

/**
 * compare_strings - computes square root of natural number n recursively
 * @s1: first string
 * @s2: second string
 * @i: index
 * Return: a 1 or zero if comparable
 */

int compare_strings(char *s1, char *s2, int i)
{

	if (s1[i] == s2[i] || s2[i]== '*')
		return (s1[i] != '\0' || compare_strings(s1, s2, i + 1));
	else if (s2[i] == '\0')
		return (s1[i] == '\0');
	else
		return (compare_strings(s1, s2, i + 1));
}



