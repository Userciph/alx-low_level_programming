#include"main.h"
/**
 * _print_rev_recursion fuction that prints string in reverse
 * @s: The string to be printed
 *
 * Return 0(success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
