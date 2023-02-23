#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int y = 0;
	long int a = 0, b = 1, next;

	while (y < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (y < 49)
		{
			printf(", ");
		}
		y++;
	}
	putchar('\n');
	return (0);
}
