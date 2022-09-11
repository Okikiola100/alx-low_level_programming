#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Author: Oladapo Okikiola
 * Return: 0 on success
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
