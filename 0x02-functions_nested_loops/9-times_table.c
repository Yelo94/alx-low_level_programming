#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j, n;
for (i = 0; i <= 9; a++)
{
for (j = 1; j <= 9; b++)
{ 
	n = i*j;
	if ((n/10) == 0)
	{
		if(j !=0)
_putchar('');
_putchar(n+'0');		
if (j ==9)
	continue:
_putchar(',');
putchar('');
	}
else
{
_putchar((n / 10) + '0' );
-putchar((% 10) + '0');
if(j == 9)
	continue
_putchar(',');

_putchar(' ');
}
}
_putchar('\n');
}
}
