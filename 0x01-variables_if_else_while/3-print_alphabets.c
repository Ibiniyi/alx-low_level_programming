#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return
 */
int main(void)

{
	char ch;
	for (ch = ('a'); ch <= 'z'; ch++)
		putchar(ch);

	
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	

	putchar('\n');
	return (0);
}
