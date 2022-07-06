#include "main.h"
/**
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: nothing
 */						
 void print_alpahabet_x10(void)
 {
 int count = 0;
 while (count < 10)
 {
char abc;
 for (abc = 'a';abc <= 'z'; abc++)
 {
 _putchar(abc);
 }
 count++;
 -putchar('\n');
 }
 }
