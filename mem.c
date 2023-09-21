#include "shell.h"

/**
 * bfreo - frees a pointer and NULLs the address
 * @adptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfreo(void **adptr)
{
	if (adptr && *adptr)
	{
		free(*adptr);
		*adptr = NULL;
		return (1);
	}
	return (0);
}
