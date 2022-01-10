### 0x18. C - Dynamic libraries ###

<div style="text-align: justify">

Thank you for visiting this repository which contain our work to start learning C language programming. 	


![Logo](https://www.howtogeek.com/wp-content/uploads/2021/05/laptop-with-terminal-big.png?height=200p&trim=2,2,2,50)

# Getting Started :running:
<div style="text-align: justify">

## Table of Contents
* [AUTHORS](./AUTHORS)
* [MIT License](./LICENSE)
* [About](#about)
* [Dependences](#dependences)
* [Installing, compiling and using](#installing, compiling and using)
* [Builtins](#builtins)
* [Man page]
* [Credits](#credits)

## About
This directory contains a collection of files, functions, structs and scripts used to build and manage this repository. If there are any issues regarding the intention of a particular script (or even part of a certain script), please reach out to us.
	
	Contents:

What is a dynamic library, how does it work, how to create one, and how to use it

What is the environment variable $LD_LIBRARY_PATH and how to use it

What are the differences between static and shared libraries

Basic usage `nm`, `ldd`, `ldconfig`

	
## Dependences 
	
> [main.h](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/main.h) --> Header file containingall functions involved in project.

> [README.md](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/README.md) ---> README file to show the project insights. 

>[libdynamic.so](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libdynamic.so) ---> library libdynamic.so containing all the functions listed in main.h

>[1-create_dynamic_lib.sh](https://github.com/Imanolasolo/holbertonschool-higher_level_programming/blob/master/0x04-python-more_data_structures/2-uniq_add.py) ---> Script that creates a dynamic library called liball.so from all the .c files that are in the current directory.



## Installing, compiling and using
	
> Only install cloning this repository on your local device:  https://github.com/Imanolasolo/holbertonschool-low_level_programming.git
	
> The nm command displays information about symbols in the specified File, which can be an object file, an executable file, or an object-file library. run `nm -D libdynamic.so` to check for libdynamic.so info.
	
> Run the executable files with `./` followed with the `.py` file





## Builtins
```
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

```
		
## Man page

-  No man page

## Flowchart
	
- No flowchart

## Resources

**Read or watch**:

[What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM])
[Create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)
[Technical Writing](https://students-support.hbtn.io/hc/en-us/articles/360023750254)


## Usage



## Credits

## Author(s):blue_book:

Work is owned and maintained by:
* Imanol Asolo <[3848](mailto:3848@holbertonschool.com)> [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Imanolasolo) [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/jjusturi) [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/imanol-asolo-5ba9b42a/)


## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).
<p align="center">
	<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" alt="This is a secret;)">
</p>

