#include "main.h"
/**
 * binary_to_uint - a function that converts binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * return:the converted number, or 0
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
