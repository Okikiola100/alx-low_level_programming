#include <stdio.h>
/**
 * main - print al possible combinations of single digit numbers.
 *
 * Author: Oladapo Okikiola(okikiola100)
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(' ');

			++1;
		}
		putchar('\n');
		return (0);
	}
}
