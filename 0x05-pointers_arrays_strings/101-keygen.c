#include <msth.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - randomly generate password
 *Return: Always 0.
 */

int main(void)
{
int pass, sum;

srand(time(0));

sum = 0;
while (sum <= 2654)
{
pass = (rand() % 128);
sum += pass
printf("%c", pass);
}
printf("%c, 2771 -sum);
return (0);
}
