#include <stdio.h>

/**
 * main - main block prints the alphabet in lowercase
 * function - use putchar twice here
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
