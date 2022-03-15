# 0x03. C - Debugging

<div style="text-align: justify">

Thank you for visiting this repository which contain our work to start learning C language programming. 

![Logo](https://www.howtogeek.com/wp-content/uploads/2021/05/laptop-with-terminal-big.png?height=200p&trim=2,2,2,50)

## Concepts
For this project, students are expected to look at this concept:
* [The Framework](https://intranet.hbtn.io/concepts/75) 

## Resources
Read or watch:
* [Debugging](https://intranet.hbtn.io/rltoken/iADtJa-KkjYI56m-cQyWIw) 

* [Rubber Duck Debugging](https://intranet.hbtn.io/rltoken/sS_CVV32moC3tyEImNCvig) 

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as   ` gdb `   or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.
 ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2019/5/af682f2cbb6d73fd4e42.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220315%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220315T205650Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b75111c70cd3deb0d736adbfc6f8b8fde3c14781eb1d27ab6ab34f0498280d01) 

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/mrElWdkThHc-wwWBat00qg) 
 , without the help of Google:

### General

* What is debugging

* What are some methods of debugging manually

* How to read the error messages

## Requirements

### General

* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 

* All your files will be compiled on Ubuntu 20.04 LTS using  ` gcc ` , using the options  ` -Wall -Werror -Wextra -pedantic -std=gnu89 ` 

* All your files should end with a new line

* Your code should use the  ` Betty `  style. It will be checked using  ` betty-style.pl `  and  ` betty-doc.pl ` 

* A README.md file at the root of the repo, containing a description of the repository

* A README.md file, at the root of the folder of this project (i.e.  ` 0x03-debugging ` ), describing what this project is about

## Tasks

### 0. Multiple mains
 In most projects, we often give you only one main file to test with. For example, this main file is a test for a   ` postitive_or_negative() `   function similar to the one you worked with in  [an earlier C project](https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw) 
 :
```bash
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$

```
```bash
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 

```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$

```
Based on the   ` main.c `   file above, create a file named   ` 0-main.c `  . This file must test that the function   ` positive_or_negative() `   gives the correct output when given a case of   ` 0 `  .

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from  [0x01. C - Variables, if, else, while - Task #0](https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw) 
  to compile with this main file to test locally.

* You only need to upload  ` 0-main.c `  and  ` main.h `  for this task. We will provide our own  ` positive_or_negative() `  function.

* You are not allowed to add or remove lines of code, you may change only one line in this task.

```bash
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 

```
 Task URLs  Github information Repo:

* GitHub repository:  ` holbertonschool-low_level_programming ` 

* Directory:  ` 0x03-debugging ` 

* File:
[0-main.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x03-debugging/0-main.c)--> Functional program

[main.h](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x03-debugging/main.h) --> main program to store all functions and variables 

 
### 1. Like, comment, subscribe

 Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

* Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.

* You do not have to compile with  ` -Wall -Werror -Wextra -pedantic `  for this task.

```bash
carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$

```
Your output should look like this:

```bash
carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$

```
 Github information Repo:

* GitHub repository:  ` holbertonschool-low_level_programming ` 

* Directory:  ` 0x03-debugging ` 

* File:  
[1-main.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x03-debugging/1-main.c) --> Functional program 

### 2. 0 > 972?
 This program prints the largest of three integers.

```bash
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$

```
```bash
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$

```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$

```
? That’s definitely not right.

Fix the code in   ` 2-largest_number.c `   so that it correctly prints out the largest of three numbers, no matter the case.

* Line count will not be checked for this task.

Github information Repo:

* GitHub repository:  ` holbertonschool-low_level_programming ` 

* Directory:  ` 0x03-debugging ` 

* File:  
[2-largest_number.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x03-debugging/2-largest_number.c) --> Functional Program 

### 3. Leap year

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

```bash
carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$

```
```bash
carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

carrie@ubuntu:/debugging$

```
```bash
carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

carrie@ubuntu:/debugging$ 

```
```bash

carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$

```
Output looks good for   ` 04/01/1997 `  ! Let’s make a new main file   ` 3-main_b.c `   to try a case that is a leap year:   ` 02/29/2000 `  .
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
carrie@ubuntu:/debugging$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
carrie@ubuntu:/debugging$

```
? That doesn’t seem right.

Fix the   ` print_remaining_days() `   function so that the output works correctly for  all  dates and  all  leap years.

* Line count will not be checked for this task.

* You can assume that all test cases have valid months (i.e. the value of  ` month `  will never be less    

* You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

Github information Repo:

* GitHub repository:  ` holbertonschool-low_level_programming ` 

* Directory:  ` 0x03-debugging ` 

* File:
[3-print_remaining_days.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x03-debugging/3-print_remaining_days.c) --> Functional program, main.h ` 

×#### Recommended Sandbox

[Running only]() 

### 1 image(1/5 Sandboxes spawned)

### Ubuntu 20.04

Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Holberton Foundations
SSHSFTP[Webterm](https://intranet.hbtn.io/user_containers/21027/webterm) 
[Destroy]() 

#### Credentials

Host7e37754e8586.1e732e4d.hbtn-cod.ioUsername7e37754e8586Passworde4af702ba40df68e3592#### Web access
[HTTPS](https://7e37754e8586.1e732e4d.hbtn-cod.io/) 
[HTTP](http://7e37754e8586.1e732e4d.hbtn-cod.io/) 
[3000](http://7e37754e8586.1e732e4d.hbtn-cod.io:3000/) 
[4000](http://7e37754e8586.1e732e4d.hbtn-cod.io:4000/) 
[5000](http://7e37754e8586.1e732e4d.hbtn-cod.io:5000/) 
[5001](http://7e37754e8586.1e732e4d.hbtn-cod.io:5001/) 
[8000](http://7e37754e8586.1e732e4d.hbtn-cod.io:8000/) 
[8080](http://7e37754e8586.1e732e4d.hbtn-cod.io:8080/) 

#### Port mapping
SSH49533HTTP49532HTTPS49531300049530MySQL49529400049528500049527500149526800049525808049524

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