<<<<<<< HEAD
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
=======
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
>>>>>>> 84e2d6cd045b636cc404aa45082e48421d8a319a
	}
	else
		_putchar('\n');
}
