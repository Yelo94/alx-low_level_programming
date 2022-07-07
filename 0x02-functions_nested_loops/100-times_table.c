#include "main.h"
/**
 * print_times_tables -print times tables for numbers from 0-14
 * @n: An input integer value
 * return: nothing
 */
void print_times_table(int n)
{
	int i, j;
	if (i = 0; i <= n; i+++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
			putformat(i * j);
		_putchar('\n');
	}
}
}
/**
 * putformat - formatted characters to output
 * @n: number to format
 * return: nothing
 */
void putformat(int n)
{
	if(n <= 9)
	{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');							      
_putchar(n + '0');
}
else if (n > 9 && n <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
{
putchar(',');
_putchar(' ');
_putchar(n / 100 + '0');
_putchar(n / 10 % 10 + '0');
_putchar(n % 10 + '0');
}
}
