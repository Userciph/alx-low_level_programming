#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
*/
int main(void)
{
	char word[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(word[ch]);
	_putchar('\n');

	return (0);
}
