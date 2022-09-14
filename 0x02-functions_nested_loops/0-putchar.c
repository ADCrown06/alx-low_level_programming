#include "main.h"
/**
 * main - print putchar 
 * Return: always 0
 */

int main(void)
{
	char *sh = "Putchar";

	while (*sh)
	{
		_putchar(*sh)
		sh++;
	}
	_putchar('\n');

	return (0);
}
