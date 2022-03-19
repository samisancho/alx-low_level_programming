#include "main.h"
/**
 *main - entry point
 *
 *Description: prints Holberton followed by a newline
 *
 *Return: returns 0(successful)
 *
 */
int main(void)
{
	char holbText[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(holbText[i]);
	}
	_putchar('\n');
	return (0);
}
