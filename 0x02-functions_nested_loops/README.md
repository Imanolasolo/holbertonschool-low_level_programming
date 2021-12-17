# 0x02. C - Functions, nested loops
<div style="text-align: justify">

Thank you for visiting this repository which contain our work to start learning C programming. 	


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
-   What are nested loops and how to use them
-   What is a function and how do you use functions
-   What is the difference between a declaration and a definition of a function
-   What is a prototype
-   Scope of variables
-   What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
-   What are header files and how to to use them with `#include`

	
## Dependences 
	
> [main.h](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/main.h) --> Main header file containing builtin functions used in different files into the project	

> [README.md](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c) ---> README file to show the project insights. 

>[0-putchar.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c) ---> Program that prints `_putchar`, followed by a new line.  

>[1-alphabet.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c) ---> Function that prints the alphabet, in lowercase, followed by a new line.

>[2-print_alphabet_x10.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c)--> Function that prints 10 times the alphabet, in lowercase, followed by a new line.
	
>[3-islower.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/3-islower.c)--> Function that checks for lowercase character.
	
>[4-isalpha.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c)--> Function that checks for alphabetic character. 
	
>[5-sign.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c)-->  Function that prints the sign of a number.
	
>[6-abs.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c)--> Function that computes the absolute value of an integer.
	
>[7-print_last_digit.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/7-print_last_digit.c)-> Function that prints the last digit of a number.
	
>[8-24_hours.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c)---> Function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
	
>[9-times_table.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c) --> Function that prints the 9 times table, starting with 0.
	
>[10-add.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c) --> Function that adds two integers and returns the result.
	
>[11-print_to_98.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c) --> Function that prints all natural numbers from `n` to `98`, followed by a new line.
	
>[100-times_table.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table) --> Function that prints the `n` times table, starting with 0.
	
>[101-natural.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c) --> Program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
	
>[102-fibonacci.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/102-fibonacci.c) -->  Program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
	
>[103-fibonacci.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c) --> Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
	
>[104-fibonacci.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/104-fibonacci.c) --> program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line


## Installing, compiling and using
	
> Only install cloning this repository on your local device:  https://github.com/Imanolasolo/holbertonschool-low_level_programming.git
	
> Compile the program with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89` followed with .c file and name of executable file.



## Builtins
	
	void print_alphabet(void);
	
	void print_alphabet_x10(void);
	
    int _islower(int c);
	
	int _isalpha(int c);
	
	int print_sign(int n);
	
	int _abs(int);
	
	int print_last_digit(int);
	
	void jack_bauer(void);
	
	void times_table(void);
	
	int add(int, int);
	
	void print_to_98(int n);
	
	void print_times_table(int n);
	
		
## Man page



## Flowchart


## Resources

**Read or watch**:

-   [Nested while loops](https://intranet.hbtn.io/rltoken/L0Vf5XJdD7ylLOyQnzVY6Q "Nested while loops")
-   [C - Functions](https://intranet.hbtn.io/rltoken/pU9KLKlz0W2ZSSlzJsYA7w "C - Functions")
-   [Learning to Program in C (Part 06)](https://intranet.hbtn.io/rltoken/pu-exPylodWaQjU7f6KhYQ "Learning to Program in C (Part 06)") 
-   [What is the purpose of a function prototype?](https://intranet.hbtn.io/rltoken/bANgUAj_-F9_85yHxzSD6w "What is the purpose of a function prototype?")
-   [C - Header Files](https://intranet.hbtn.io/rltoken/xC6XfUoznEIJgfdP52GUIw "C - Header Files") (_stop before the “Once-Only Headers” paragraph_)

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=Writing+a+shell+in+C&sa=X&ved=2ahUKEwi6vIn-nrr0AhWbTDABHUjrAxwQ1QJ6BAgLEAE&biw=1378&bih=708&dpr=1.25)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=z4LEuxMGGs8)



## Usage



## Credits

## Author(s):blue_book:

Work is owned and maintained by
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
