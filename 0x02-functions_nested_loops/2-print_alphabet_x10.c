#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	int sl;

	for (ten = 0; ten <= 9; ten++)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
			_putchar(sl);
		_putchar('\n');
	}
}
