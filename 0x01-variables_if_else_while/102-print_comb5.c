#include <stdio.h>
/**
 * main - Entry
 * Return: Alaways 0
 */
int main(void)
{
	int k = 0;
	int l;
	int m;

	int k2;
	int l2;
	int m2;

	while (k <= 98)
	{
		l = (k / 10 + '0');
		m = (k % 10 + '0');
		k2 = 0;
		while (k2 <= 99)
		{
			l2 = (k2 / 10 + '0');
			m2 = (k2 % 10 + '0');

			if (k < k2)
			{
				putchar(l);
				putchar(m);
				putchar(' ');
				putchar(l2);
				putchar(m2);

				if (k != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k2++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
