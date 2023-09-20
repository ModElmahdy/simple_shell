#include "shell.h"

/**
 * _strlen - the length of a string
 * @z: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *z)
{
	int v = 0;

	if (!z)
		return (0);

	while (*z++)
		v++;
	return (v);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @b1: the st1 strang
 * @b2: the sec2 strang
 *
 * Return: negative if b1 < b2, positive if b1 > b2, zero if b1 == b2
 */
int _strcmp(char *b1, char *b2)
{
	while (*b1 && *b2)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	if (*b1 == *b2)
		return (0);
	else
		return (*b1 < *b2 ? -1 : 1);
}

/**
 * starts_with - checks if subt starts with stsea
 * @stsea: string to search
 * @subt: the substring to find
 *
 * Return: address of next char of stsea or NULL
 */
char *starts_with(const char *stsea, const char *subt)
{
	while (*subt)
		if (*subt++ != *stsea++)
			return (NULL);
	return ((char *)stsea);
}

/**
 * _strcat - concatenates two strings
 * @desit: the destination buffer
 * @sorc: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *desit, char *sorc)
{
	char *ret = desit;

	while (*desit)
		desit++;
	while (*sorc)
		*desit++ = *sorc++;
	*desit = *sorc;
	return (ret);
}

