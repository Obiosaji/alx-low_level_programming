#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x = 0, y = 1, next;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
