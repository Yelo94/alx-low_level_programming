#include "main.h"

/**
 * _pow_recursion - returns the value of the exponentiation
 *@x: the base
 *@y: the exponent
 *_pow_recursion return: value (-1)
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return
      	(result);
}
