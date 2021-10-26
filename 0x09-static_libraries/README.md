Title: 0x09-static_libraries

Author: Imanol Asolo

Directory created to show the creation and use of static libraries in C with ar, ranlib, and nm.

Tasks:

0.A library is not a luxury but one of the necessities of life.

Create a C static library (libmy.a) with these functions:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

Include a header function containing the prototypes of all functions in libmy .a called main.h

1. Without libraries what have we? We have no past and no future

create_static_lib.sh: Bash script that creates a static library called liball.a from all the .c files in the current directory.



