#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char rl;

	for (rl = 'z'; rl >= 'a'; rl--)
		putchar(rl);

	putchar('\n');
	return (0);
}
