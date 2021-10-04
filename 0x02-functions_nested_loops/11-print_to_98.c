/*
 * File: 11-print_to_98.c
 * Auth: Imanol Asolo
 */

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
}
