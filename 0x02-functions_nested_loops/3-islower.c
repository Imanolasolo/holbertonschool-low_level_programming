/*
 * File: 3-islower.c
 * Auth: Brennan D Baraban
 */

#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
return (0);
}
