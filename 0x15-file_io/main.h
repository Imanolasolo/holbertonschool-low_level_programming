#ifndef _MAIN_H_
#define _MAIN_H_

/*ssize_t Control size*/
#include <sys/types.h>
#include <sys/stat.h>

/* file control options */
#include <fcntl.h>

/*standard libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * File: main.h
 * Auth: Imanol Asolo
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x15-file_io directory.
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * * Return: On success 1.
 */
int _putchar(char c);

#endif /* _MAIN_H_ */
