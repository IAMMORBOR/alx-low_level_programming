#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10  - function that prints lower case alphabet
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
