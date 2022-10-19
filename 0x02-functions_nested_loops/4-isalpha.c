#include "main.h"
/**
 * _isalpha - check for char alphabeth
 * @c: cheching char
 * Return: 1 if character is letterlower or upper, 0 otherwise
 */
int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
	return (1);
	else
	return (0);
	
	


}
