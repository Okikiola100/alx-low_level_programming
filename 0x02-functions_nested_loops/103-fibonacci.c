#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = o;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\nn", counter);
	return (0);
}

