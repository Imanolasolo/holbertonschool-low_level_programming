/*
 * File: 0-holberton.c
 * Auth: Imanol Asolo
 *
 */

#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
  void print_alphabet(void)
  {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
      _putchar(letter);

    _putchar('\n');
  }
}
