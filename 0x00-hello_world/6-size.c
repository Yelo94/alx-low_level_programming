#include<stdio.h>
/**
*main - Entry point
*@void: signifies null par
*Return: return 0 if succesful.
*/
int main(void)
{
printf("Size of a char: %zu byte(S)\n", sizeof(char));
printf("Size of an int: %zu byte(S)\n", sizeof(int));
printf("Size of a long int: %zu byte(S)\n", sizeof(long));
printf("size of a long long int: %zu byte(S)\n", sizeof(long long));
printf("Size of a float: %zu byte(S)\n", sizeof(float));

return (0);
}
