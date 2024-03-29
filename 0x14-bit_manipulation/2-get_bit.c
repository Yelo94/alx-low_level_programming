#include "main.h"
/**
 *
 *get_bit - return value of a bit at a given index 
 *@n:input number
 *@index:index to find bit at 
 *return:value of bit at a given index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
	return (-1);
return ((n >> index) & 1 ? 1 : 0);
}
