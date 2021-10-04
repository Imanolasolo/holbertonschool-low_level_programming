/*
 * File: 2-print_alphabet_x10.c
 * Auth: Imanol Asolo
 */

#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
return (0);
}
