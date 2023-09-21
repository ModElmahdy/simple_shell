#include "shell.h"

/**
 * st2 - copies a string
 * @desit: the destination
 * @sour: the source
 *
 * Return: pointer to destination
 */
char *st2(char *desit, char *sour)
{
	int v = 0;

	if (desit == sour || sour == 0)
		return (desit);
	while (sour[v])
	{
		desit[v] = sour[v];
		v++;
	}
	desit[v] = 0;
	return (desit);
}

/**
 * _std - duplicates a string
 * @stre: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_std(const char *stre)
{
	int length = 0;
	char *ret;

	if (stre == NULL)
		return (NULL);
	while (*stre++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--stre;
	return (ret);
}

/**
 *_putsin - prints an input string
 *@strp: the string to be printed
 *
 * Return: Nothing
 */
void _putsin(char *strp)
{
	int v = 0;

	if (!strp)
		return;
	while (strp[i] != '\0')
	{
		_putchar(strp[v]);
		v++;
	}
}

/**
 * _putchar - the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int v;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || v >= WRITE_BUF_SIZE)
	{
		write(1, buf, v);
		v = 0;
	}
	if (c != BUF_FLUSH)
		buf[v++] = c;
	return (1);
}
