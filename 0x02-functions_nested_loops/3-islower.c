#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: c checking character
 * Return: 1 if the char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
