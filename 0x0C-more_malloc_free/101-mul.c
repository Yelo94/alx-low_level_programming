#include <stdio.h>
#include <stdlib.h>
/**
 *main - Check the code
 *@argc:number of arguments
 *@argv:arguments 
 *Description:If the number of arguments is incorrect or one number 
 *contains non-digits,the function exits with a status of 98.
 *Return: Nothing
 */
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
}
