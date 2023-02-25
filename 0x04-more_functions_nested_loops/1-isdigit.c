#include "main.h"
/**
 * _isdigit - check if parameter is a number between 0 to 9
 * @c: char to be checked
 *
 * Return: 1 if if a number (0 to 9), 0 if other case
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
