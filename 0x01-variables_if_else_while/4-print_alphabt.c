#include <stdio.h>
/**
 * main - print the alphabet in lower case
 * following by the line, except q and e
 * Return: Always 0
 */
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n);

	return(0);
}
