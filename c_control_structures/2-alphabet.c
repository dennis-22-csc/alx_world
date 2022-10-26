#include <stdio.h>

/**
 * main - prints the next character to the character
 * in variable ch in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	ch++;
	putchar(ch);
	putchar('\n');
	return (0);
}
